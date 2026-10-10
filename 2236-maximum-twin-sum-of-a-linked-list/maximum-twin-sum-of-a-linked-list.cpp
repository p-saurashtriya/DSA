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
    int pairSum(ListNode* head) {
        vector<int> list;
        while(head != nullptr){
            list.push_back(head->val);
            head = head->next;
        }
        int i = 0;
        int j = list.size()-1;
        int maxi = INT_MIN;
        while(i<j){
            int candidate = list[i]+list[j];
            maxi = max(maxi, candidate);
            i++;
            j--;
        }
        return maxi;
        
    }
};