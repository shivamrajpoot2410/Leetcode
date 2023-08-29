class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        //int n=*max_element(nums.begin(),nums.end());
        int n=10001;
        vector<int> umap(n, 0);
        for(auto num: nums)
        {
            umap[num] += num;
        }
        vector<int>dp(n,0);
        dp[0]=0;
        dp[1]=umap[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=max(umap[i]+dp[i-2],dp[i-1]);
            
        }
        return dp[n-1];



    }
};