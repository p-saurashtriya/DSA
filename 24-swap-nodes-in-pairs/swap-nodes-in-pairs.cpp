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
    ListNode* swapPairs(ListNode* head) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr1 = head;
        ListNode* prev = dummy;
        
        while(curr1 != NULL && curr1-> next != NULL){
            ListNode* curr2 = curr1->next;
            prev->next = curr2;
            curr1->next = curr2->next;
            curr2->next = curr1;
            prev = curr1;
            curr1 = curr1->next;
        }
        return dummy->next;
    }
    
};