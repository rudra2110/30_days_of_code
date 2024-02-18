// 83. Remove Duplicates from Sorted List
// Solved
// Easy
// Topics
// Companies
// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,1,2]
// Output: [1,2]
// Example 2:


// Input: head = [1,1,2,3,3]
// Output: [1,2,3]   



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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* prev=head;
        ListNode* temp;
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }
        
        while(prev->next!=nullptr)
        {
            temp=prev->next;

            if(prev->val==temp->val)
            {
                ListNode* n=temp;
                prev->next=prev->next->next;
                delete n;
            }
            else
            {
                prev=prev->next;
            }
        }
        return head;
    }
};