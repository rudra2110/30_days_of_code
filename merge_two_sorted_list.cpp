// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

 

// Example 1:


// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
     {
         
        ListNode* ptr1=list1; 
        ListNode* ptr2=list2;
         ListNode* node=new  ListNode(-1);
         ListNode* temp=node;

        if(list1==nullptr)
        return list2;
        if(list2==nullptr)
        return list1;

       while(ptr1!=nullptr && ptr2!=nullptr)
       {
          if(ptr1->val<=ptr2->val)
          {
              temp->next=ptr1;
              temp=ptr1;
              ptr1=ptr1->next;
          }
          
           else

          {
              temp->next=ptr2;
              temp=ptr2;
              ptr2=ptr2->next;
          }
       } 

       if(ptr1!=nullptr)
       {
           temp->next=ptr1;
            temp=ptr1;
              ptr1=ptr1->next; 
       } 

       if(ptr2!=nullptr)
       {
           temp->next=ptr2;
            temp=ptr2;
              ptr2=ptr2->next; 
       } 

       return node->next;
      
     
    }
};