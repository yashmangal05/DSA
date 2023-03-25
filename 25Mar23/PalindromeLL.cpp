//https://leetcode.com/submissions/detail/921761950/
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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        
        ListNode* first = head->next;
        ListNode* slow = head;
        
        while(first && first->next){
            first = first->next;
            
            if(first->next != NULL){
                first = first->next;
            }
            slow = slow->next;
        }
        
        ListNode* tempo = slow -> next;
        slow -> next = reverse(tempo);
        
        ListNode* temp = slow->next;
        ListNode* temp2 = head;
        
        while(temp!= NULL){
            if(temp2->val != temp->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};