//https://leetcode.com/problems/reverse-linked-list/description/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = head;
        ListNode* next = head;

        prev = NULL;

        while(cur != NULL){
            
            next = cur->next;
            cur->next = prev;
            
            prev = cur;
            cur = next;
            

        }

        return prev;

    }
};