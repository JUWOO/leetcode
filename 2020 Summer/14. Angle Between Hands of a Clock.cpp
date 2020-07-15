//https://leetcode.com/problems/angle-between-hands-of-a-clock/
//Time Complexity : O(1)
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hour_angle = (hour % 12 ) * 30 + minutes * 0.5;
        double minute_angle = minutes * 6;
        double diff = abs(hour_angle - minute_angle);
        return min(diff, 360 - diff);
    }
};


/*
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min;
        double hou;
        double total;
        min = minutes*6;
        hou = (double)hour*30 + (double)minutes/2 ;
        total = min - hou;
        if(total < 0)
            total = -total;
        if(total > 180)
            total = 360-total;
        return total;
    }
};
*/