// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 
 // Solution //

 class Solution {
public:
    void moveZeroes(vector<int>& nums)
     {   int l=nums.size();
         int j=0;
        for(int i=0;i<l;i++)
        {
            if(nums[i]!=0) // if non zero number put in array and increase the index.
            {
                nums[j]=nums[i];
                j++;
            }
        }

    for(int i=j;i<l;i++) //when each non zero number gets into array then insert zero in remaining place.
    {
        nums[i]=0;
    }

    }
};



// Alternative Solution //

class Solution {
public:
    void moveZeroes(vector<int>& nums)
     {   int l=nums.size();
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l-1;j++)
            {
                if(nums[j]==0&&nums[j+1]!=0)
                {
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};