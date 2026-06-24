class Solution {
public:
    double angleClock(int hour, int minutes) {
        double th1=6*minutes;
        double th2=0.5*minutes+30*hour;
        double th=abs(th2-th1);

        return min(th,360-th);
    }
};