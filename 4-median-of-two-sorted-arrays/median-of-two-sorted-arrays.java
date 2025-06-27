class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int [] result = new int[nums1.length+nums2.length];
        int n1 = nums1.length;
        int n2 = nums2.length;
        int r = result.length;
        int k =0;
        for(int i =0;i<n1;i++){
            result[k++] = nums1[i];
        }
        for(int i =0;i<n2;i++){
            result[k++] = nums2[i];
        }
        Arrays.sort(result);
        if(r%2==0)return (float)(result[r/2-1]+result[r/2])/2;
        else return result[r/2];
        
    }
}