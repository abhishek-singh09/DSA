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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val){
            head=head->next;
        }
        ListNode* root =head;
        while(root!=nullptr&& root->next!=nullptr){
            if(root->next->val==val){
                root->next=root->next->next;
            }else{
                root=root->next;
            }
        }
        return head;
        
    }
};