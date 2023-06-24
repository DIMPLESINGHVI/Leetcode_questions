// Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),max=0;
        //sort(nums.begin(),nums.end());
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            max = max + nums[i];
            if(maxi < max)
            { 
                maxi = max;
            }

            if(max<0)
                max = 0;
        }

        return maxi;
    }
};
