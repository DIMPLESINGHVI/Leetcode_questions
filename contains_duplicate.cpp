// ques: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int count;
       for(int i=0;i<nums.size();i++)
       {
           count =0;
           while(i<nums.size()-1 && nums[i]==nums[i+1])
           {
               i++;
               count++;
           }
           if(count>=1)
            return true;  
       }
     
    return false;    
    }
};
