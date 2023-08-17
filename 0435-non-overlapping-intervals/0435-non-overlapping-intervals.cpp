class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();
        int c=0;
        int li=0;
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<intervals[li][1])
            {
                c++;
                if(intervals[i][1]<intervals[li][1])
                {
                    li=i;
                }
            }
            else
            {
                li=i;
            }
            
        }
        return c;
    }
}; 