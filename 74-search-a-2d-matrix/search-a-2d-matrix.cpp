class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Safety checks
        if (matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size();
        int n = matrix[0].size();

        // Single-element quick path (optional)
        if (m == 1 && n == 1) return matrix[0][0] == target;

        // Binary search to find the candidate row:
        // we want the last row whose first element <= target
        int lo = 0, hi = m - 1;
        int row = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (matrix[mid][0] == target) return true;
            if (matrix[mid][0] < target) {
                row = mid;      // mid could be the candidate row
                lo = mid + 1;   // try to find a later row still <= target
            } else {
                hi = mid - 1;
            }
        }

        if (row == -1) return false; // target is smaller than matrix[0][0]

        // Binary search inside the chosen row
        lo = 0; hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (matrix[row][mid] == target) return true;
            if (matrix[row][mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }

        return false;
    }
};
