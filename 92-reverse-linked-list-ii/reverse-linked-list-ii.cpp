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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int counter = 0;
        ListNode* p = dummy;
        ListNode* c = head;
        while(counter < left-1) {
            p = c;
            c = c->next;
            counter++;
        }
        ListNode* prev = nullptr;
        ListNode* curr = c;
        counter = 0;
        while(counter < (right-left+1)) {
            
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            counter++;
        }

        p->next = prev;
        c->next = curr;
        return dummy->next;
    }

};

        
