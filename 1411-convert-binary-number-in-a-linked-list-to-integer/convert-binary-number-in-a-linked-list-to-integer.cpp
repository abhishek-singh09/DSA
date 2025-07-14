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
    int getDecimalValue(ListNode* head) {
        ListNode* node=head;
        int i=-1;
        while(node!=nullptr){
            i++;
            node=node->next;
        }
        node=head;
        int num=0;
        while(node!=nullptr){
            if(node->val==1){
                num+=pow(2,i);
                i--;           
            }else{
                i--;
            }
            node=node->next;
        }

        return num;
                
    }
};