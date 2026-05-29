/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this.start = start;
 *         this.end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int numIntervals = intervals.size();

        for (int i = 0; i < numIntervals; i++) {
            Interval referenceInterval = intervals[i];
            for (int j = i+1; j < numIntervals; j++) {
                Interval currentInterval = intervals[j];
                if (currentInterval.start < referenceInterval.start && currentInterval.end <= referenceInterval.start) {
                    continue;
                } else if (currentInterval.start >= referenceInterval.end && currentInterval.end > referenceInterval.end) {
                    continue;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};
