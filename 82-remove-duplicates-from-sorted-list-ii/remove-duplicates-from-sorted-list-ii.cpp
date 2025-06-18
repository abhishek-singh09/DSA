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
        if(head==NULL || head->next == nullptr) return head;
        ListNode* n1=new ListNode(0);
        ListNode* prev=n1;
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=nullptr){
            if(curr!=NULL && curr->val==curr->next->val){
                while(curr->next!=NULL && curr->val==curr->next->val){
                    curr=curr->next;
                }
                curr=curr->next;
            }else{
                ListNode* newnode=new ListNode(curr->val);
                prev->next=newnode;
                prev=prev->next;
                curr=curr->next;
            }
        }
        if(curr!=NULL){
            prev->next=curr;
        }
        return n1->next; 
    }
};