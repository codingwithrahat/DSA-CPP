//https://leetcode.com/problems/middle-of-the-linked-list/submissions/

//method - 01 (bruteforce)

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;

//         int cnt = 0;

//         while(temp != NULL){
//             temp = temp->next;
//             cnt++;
//         }

//         ListNode* cur = head;

//         int mid = (cnt / 2) + 1;

//         for(int i = 1; i<mid; i++){
//             cur = cur->next;
//         }

//         return cur;
//     }
// };






//method - 02 (fast slow approach)


// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }
// };