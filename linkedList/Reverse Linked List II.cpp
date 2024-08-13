class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        vector<int> values;
        ListNode* current = head;
        while(current)
        {
            values.push_back(current->val);
            current = current->next;
        }
        reverse(values.begin() + left - 1, values.begin() + right);
        current = head;
        int i=0;
        while(current)
        {
            current->val = values[i++];
            current = current->next;
        }
        return head;
    }
};
