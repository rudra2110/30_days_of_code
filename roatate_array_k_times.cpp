// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]


// Solution //

class Solution {
public:
    void rotate(vector<int>& nums, int k)
     {
        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = temp[i];
        }
    }
};


// Alternate Method //

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {    int l=nums.size();
         int temp;
        for(int j=0;j<k;j++)
        {
          temp=nums[l-1];
        for(int i=l-1;i>0;i--)
        {    
            nums[i]=nums[i-1];
               
        }
         nums[0]=temp;
        
    }
    }
};