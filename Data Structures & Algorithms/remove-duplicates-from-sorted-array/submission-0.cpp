class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int high=0;;
        int res=1;
        int low=1;

        while(low<n)
        {
            if(nums[low]==nums[low-1])
            {
                low++;
                continue;
            }
            else
            {
            nums[high+1]=nums[low];
            high++;
            res++;
            low++;
            }
            
        }
        return res;
    }
};