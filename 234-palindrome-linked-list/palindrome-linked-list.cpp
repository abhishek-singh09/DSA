class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> stk;
        ListNode* root = head;
        int size = 0;

        while (root != nullptr) {
            size++;
            root = root->next;
        }

        int half = size / 2;

        for (int i = 0; i < half; i++) {
            stk.push(head->val);
            head = head->next;
        }

        if (size % 2 != 0) {
            head = head->next;
        }

        while (head != nullptr) {
            if (head->val != stk.top()) {
                return false;
            }
            stk.pop();
            head = head->next;
        }

        return true;
    }
};
