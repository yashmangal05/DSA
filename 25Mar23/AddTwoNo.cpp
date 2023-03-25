//https://leetcode.com/submissions/detail/921772577/
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
// cout << sum << " " << carry << endl;
// cout << num1 << " " << num2 << " " << carry;
class Solution {
public:
    void add(ListNode* &temp, ListNode* &temp2){
        
        int carry = 0;
        
        while(temp->next){
            int num1 = 0, num2 = 0;
            
            if(temp) num1 = temp->val;
            if(temp2) num2 = temp2->val;
            
            int sum = num1 + num2 + carry;
            temp->val = sum%10;
            carry = sum/10;
            temp = temp->next;
            if(temp2)
                temp2 = temp2->next;
        }
        
        int num1 = 0, num2 = 0;
        if(temp) num1 = temp->val;
        if(temp2) num2 = temp2->val;
        int sum = num1 + num2 + carry;
        temp->val = sum%10;
        carry = sum/10;
        
        if(carry > 0){
            ListNode* tempo = new ListNode(carry);
            tempo->next = NULL;
            temp->next = tempo;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode* temp1 = l1;
        int count = 1;
        while(temp1 != NULL){
            temp1 = temp1->next;
            count++;
        }
        int count2 = 1;
        
        temp1 = l2;
        while(temp1 != NULL){
            temp1 = temp1->next;
            count2++;
        }
        ListNode* head;
        if(count > count2){
            head = l1;
            add(l1, l2);
        }
        else{
            head = l2;
            add(l2, l1);
        }
        return head;
    }
};