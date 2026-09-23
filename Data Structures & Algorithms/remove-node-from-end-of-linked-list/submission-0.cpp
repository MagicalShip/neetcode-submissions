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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int listlen = 0;
        while(cur)
        {
            listlen++;
            cur = cur->next;
        }
        int index = listlen - n;
        int curindex = 0;
        cur = head;
        ListNode* pre = nullptr;
        while(cur)
        {
            if(curindex == index)
            {
                if(!pre)
                {
                    return cur->next;
                }
                else
                {
                    pre->next = cur->next;
                    return head;
                }
            }
            else
            {
                pre = cur;
                cur = cur->next;
                curindex++;
            }
        }
        return nullptr;
    }
};
