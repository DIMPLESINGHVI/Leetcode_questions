class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int j=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==j)
        //     {
        //         j++;
        //     }
        //     else
            
        //         return j;
        // }
        // return nums.size();
        int x=0;
        for(int l:nums)  //xor kro toh x = 0^1^2...n tak ajayega
        {
            x ^=l;
        }
        for(int i=0;i<=nums.size();i++)  //abhi use the property a^a=0...toh x se 0 se n tak xor krdo, fir joh bache woh return.
        {  
            x ^=i;
        }
        return x;  //return idhar krdo
    }    
};
