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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newhead = nullptr;
        ListNode* tail = nullptr;
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        while(cur1 && cur2)
        {
            if(cur1->val < cur2->val)
            {
                if(!newhead)
                {
                    newhead = cur1;
                    tail = newhead;
                    cur1 = cur1->next;
                    tail ->next = nullptr;
                }
                else
                {
                    tail->next = cur1;
                    cur1 = cur1->next;
                    tail = tail->next;
                    tail ->next = nullptr;
                }
            }
            else
            {
                if(!newhead)
                {
                    newhead = cur2;
                    tail = newhead;
                    cur2 = cur2->next;
                    tail ->next = nullptr;
                }
                else
                {
                    tail->next = cur2;
                    cur2 = cur2->next;
                    tail = tail->next;
                    tail ->next = nullptr;
                }

            }
        }
        if(!cur1)
        {
            if(!tail)
            {
                return cur2;
            }
            tail->next = cur2;
        }
        else
        {
            if(!tail)
            {
                return cur1;
            }
            tail->next = cur1;
        }
        return newhead;
    }
};
