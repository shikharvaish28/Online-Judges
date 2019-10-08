/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !(head->next))
            return head;
        ListNode *res = head->next;
        head->next = swapPairs(res->next);
        res->next = head;
        return res;
    }
    
  Solution() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
  }
};
