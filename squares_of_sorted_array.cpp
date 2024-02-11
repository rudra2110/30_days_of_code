// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]



// Solution //

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int l=nums.size();

      for(int i=0;i<l;i++)
      {
          nums[i]= nums[i]*nums[i];
      }
    sort(nums.begin(),nums.end());
     return nums;
    }
};

// Alternative Solution //

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int l=nums.size();

      for(int i=0;i<l;i++)
      {
          nums[i]= nums[i]*nums[i];
      }
    
     for(int i=0;i<l;i++)
     {
         for(int j=0;j<l-1;j++)
         {
             if(nums[j]>nums[j+1])
             {
                 int temp=nums[j];
                 nums[j]=nums[j+1];
                 nums[j+1]=temp;
             }
         }
     }
     return nums;
    }
};