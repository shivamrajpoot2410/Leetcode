class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1,pos=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>nums[n-1]){
                low=mid+1;
                pos=mid;
            }
            else high=mid-1;
        }
        
        low=0,high=nums.size()-1;
        if(pos!=-1){
            if(target>=nums[0]&&target<=nums[pos]){
                high=pos;
            }
            else low=pos+1;
        }
        int index=-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target){
                index=mid;
                break;
            }
            if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return index;
    }
};