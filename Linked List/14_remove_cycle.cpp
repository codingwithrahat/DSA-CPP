//https://leetcode.com/problems/linked-list-cycle-ii/description/
//if ask to remove the cycle in same prb


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

//             ListNode* prev = NULL;

//             while(slow != fast){
//                 slow = slow->next;
//                 prev = fast;
//                 fast = fast->next;
//             }

//             prev->next = NULL;            //it will remove the cycle

//             return slow;
//         }

//         return NULL;
//     }
// };