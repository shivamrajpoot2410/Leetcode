class Solution {
public:
bool check(vector<int>& nums, int p, int mid)
{
    int i=0;
    int count=0;
    while(i<nums.size()-1)
    {
        if(nums[i+1]-nums[i]<=mid)
        {
            count++;
            i+=2;
        }
        else i++;
    }
    return count>=p;
}
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int lo=0, hi=(nums[n-1]-nums[0]);
        int result;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(check(nums,p,mid))
            {
                result=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }

        }
        return result;
    }
};