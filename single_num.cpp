// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4


// Solution //


class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {   int temp;
        for(int i=0;i<nums.size();i++)
        {   int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
        if(count==1)
        {
             temp=nums[i];  
        }
        }
        return temp;
    }
};