class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){return a[0] < b[0];});
        int numIntervals = intervals.size();
        int numRemoved = 0;
        int maxEnd = intervals[0][1];
        for (int i = 1; i < numIntervals; i++) {
            int currBegin = intervals[i][0];
            int currEnd = intervals[i][1];

            if (maxEnd > currBegin) { // not currEnd
                numRemoved++;
                maxEnd = min(currEnd, maxEnd);
            } else {
                maxEnd = currEnd;
            }
        }
        return numRemoved;
    }
};
