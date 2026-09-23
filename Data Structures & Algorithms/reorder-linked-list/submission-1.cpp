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
    void reorderList(ListNode* head) {
        if(!head->next)
        {
            return ;
        }
        ListNode* low = head;
        ListNode* fast = head;
        ListNode* lowpre = head;
        while(fast && fast->next)
        {
            lowpre = low;
            low = low->next;
            fast = fast->next->next;
        }
        lowpre->next = nullptr;
        ListNode* newhead = nullptr;
        while(low)
        {
            ListNode* next = low->next;
            low->next = newhead;
            newhead = low;
            low = next;
        }
        ListNode node;
        ListNode* cur = &node;
        while(newhead && head)
        {
            cur->next = head;
            head = head->next;
            cur->next->next = newhead;
            newhead = newhead->next;
            cur = cur->next->next;
        }
        if(newhead)
        {
            cur->next = newhead;
        }
        head = node.next;
    }
};
