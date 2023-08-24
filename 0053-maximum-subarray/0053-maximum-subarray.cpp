class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum,msum;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                sum=nums[i];
                msum=sum;
            }
            else{
                sum=max(sum+nums[i],nums[i]);
                msum=max(sum,msum);
            }
        }
        return msum;
    }
};