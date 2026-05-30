/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        // O(nlogn)
        int numberOfIntervals = intervals.size();
        
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {return a.start < b.start;});

        for (int i = 0; i < numberOfIntervals-1; i++) {
            if (intervals[i].end > intervals[i+1].start) {
                return false;
            }
        }
        return true;
    }
};
