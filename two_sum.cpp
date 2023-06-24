// ques: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//approach : create a result array and sort the elements of the given vector. now use a while loop till start<=end and check for 3 conditions like in binary search
// to find if the target number is achieved with addition. then finally insert the start and end index to the result vector.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        int arr[l];
    
     for(int i=0;i<nums.size();i++){
         arr[i]=nums[i];
     }
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1;
        while(start<end){
            if(nums[start]+nums[end]==target){
              
             break;
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        for(int i=0;i<l;i++){
            if(nums[start]==arr[i]){
                ans.push_back(i);
            }
            else if(nums[end]==arr[i]){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
