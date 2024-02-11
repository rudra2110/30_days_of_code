// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false


//  Solution //


class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        
        if(s.size()%2!=0)
        {
            return 
            false;
        }

      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='('||s[i]=='{'||s[i]=='[')
          {   int temp=s[i];
              st.push(temp);
          }

       else
       {
           if(!st.empty()&&s[i]==')'&&st.top()=='(')
           {
               st.pop();
           }

           else if(!st.empty()&&s[i]=='}'&&st.top()=='{')
           {
               st.pop();
           }

          else if(!st.empty()&&s[i]==']'&&st.top()=='[')
           {
               st.pop();
           }

           else 
           {
               return false;
           }
       }


      }

     if(st.empty())
     return true;
     else
     return 
     false; 



    }
};