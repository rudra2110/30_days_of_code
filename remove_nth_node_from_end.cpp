// Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:


// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]   



// Solution //

class Solution {
public:
    int getLength(ListNode* &head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        return len;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getLength(head);
        int pos = len - n;
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = head;
        if(pos == 0){
            head = head->next;
            return head;
        }
        while(curr != NULL){
            if(count == pos){
                prev->next = curr->next;
                curr->next = NULL;
                break;
            }
            else{
                prev = curr;
                curr = curr->next;
                count++;
            }
        }

        return head;
    }
};