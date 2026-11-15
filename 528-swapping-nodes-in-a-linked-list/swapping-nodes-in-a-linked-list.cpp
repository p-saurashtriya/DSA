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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* n1 = head;
        int startJumps = 0;
        while (startJumps < k - 1) {
            n1 = n1->next;
            startJumps++;
        }
        ListNode* n1t = n1;
        ListNode* n2 = head;
        while (n1t->next != nullptr) {
            n1t = n1t->next;
            n2 = n2->next;
        }
        
        int temp = n1->val;
        n1->val = n2->val;
        n2->val = temp;
        return head;
    }
        
    
};