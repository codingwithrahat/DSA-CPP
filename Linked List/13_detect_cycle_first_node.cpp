//https://leetcode.com/problems/linked-list-cycle-ii/description/


// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         bool flag = false;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 flag = true;
//                 break;
//             } 
//         }


//         if(flag){
//             slow = head;

//             while(slow != fast){
//                 slow = slow->next;
//                 fast = fast->next;
//             }

//             return slow;
//         }

//         return NULL;
//     }
// };