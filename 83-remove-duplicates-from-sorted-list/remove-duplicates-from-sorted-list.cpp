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
        ListNode* node= head;
        if(node==NULL ||node->next==nullptr) return node;

        while(node->next!=NULL){
            if(node->val==node->next->val){
                node->next=node->next->next;
            }else{
                node=node->next;
            }
        }

        // node=head;
        return head;

        
        
    }
};