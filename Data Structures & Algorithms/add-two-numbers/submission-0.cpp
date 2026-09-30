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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n = 0;
        ListNode* newhead = new ListNode();
        ListNode* newtail = newhead;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        while(cur1 || cur2 || n > 0)
        {
            int num1 = 0, num2 = 0;
            if(cur1)
            {
                num1 = cur1->val;
            }
            if(cur2)
            {
                num2 = cur2->val;
            }
            int num = num1 + num2 + n;
            n = num / 10;
            num = num % 10;
            ListNode* curnode = new ListNode(num);
            newtail->next = curnode;
            newtail = curnode;
            if(cur1)
            {
                cur1 = cur1->next;
            }
            if(cur2)
            {
                cur2 = cur2->next;
            }
        }
        return newhead->next;
    }
};
