// 2. Add Two Numbers
// Solved
// Medium
// Topics
// Companies
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]  


// Solution // 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    { 
         ListNode* dummy= new ListNode(1);
        ListNode* temp=dummy;

       int sum=0,num,carry=0;
       while(l1!=nullptr && l2!=nullptr)
       {
         sum=l1->val + l2->val + carry;
         num=sum%10;
         carry=sum/10;

         ListNode* node=new ListNode(num);
         temp->next=node;
         temp=temp->next;  
     
        l1=l1->next;
        l2=l2->next;

       }

       while(l1!=nullptr)
       {
         sum=l1->val + carry;
         num=sum%10;
         carry=sum/10;

         ListNode* node=new ListNode(num);
         temp->next=node;
         temp=temp->next;

         l1=l1->next;
       }

        while(l2!=nullptr)
       {
         sum=l2->val + carry;
         num=sum%10;
         carry=sum/10;

         ListNode* node=new ListNode(num);
         temp->next=node;
         temp=temp->next;

         l2=l2->next;
       }

     while(carry!=0)
     {
       sum= carry;
         num=sum%10;
         carry=sum/10;
         ListNode* node=new ListNode(num); 
         temp->next=node;
         temp=temp->next; 
     }

      return dummy->next;
    }
};