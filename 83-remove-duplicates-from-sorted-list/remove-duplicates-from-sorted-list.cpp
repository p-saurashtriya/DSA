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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* nodeA = head;
        while(nodeA != NULL){ 
        ListNode* nodeB = nodeA->next;

        int val = nodeA->val;
        while(nodeB != NULL && val == nodeB->val){
            nodeB =nodeB->next;
        }
        nodeA->next = nodeB;
        nodeA = nodeB;
    }
    return head;  
}};
