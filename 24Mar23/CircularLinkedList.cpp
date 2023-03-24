//https://leetcode.com/submissions/detail/921400585/
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
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL){
            fast = fast->next;
            if(fast == NULL) return false;
            fast = fast->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};