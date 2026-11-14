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
    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = slow;
        while(curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* h1 = head;
        ListNode* l2 = prev;
        while(l2->next != NULL) {
        ListNode* l1v = h1->next;
        h1->next = l2;
        ListNode* l2v = l2->next;
        l2->next = l1v;
        h1 = l1v;
        l2 = l2v;
        
    }
    }
};