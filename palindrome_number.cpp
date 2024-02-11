// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


// Solution //

class Solution {
public:
    bool isPalindrome(int x) 
{
      int rem;
      long int res=0;
      int num=x;
      if(x<0)
      {
          return false;
      }
      while(num!=0)
      {   
          rem=num%10;
          res=(res*10)+rem;
          num=num/10;
      }  

      if(res==x)
      return true;
      else
      return false;
 }
};