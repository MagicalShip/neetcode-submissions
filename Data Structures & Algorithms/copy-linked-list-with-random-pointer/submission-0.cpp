/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
        {
            return nullptr;
        }
        unordered_map<Node*, int> mlist;
        unordered_map<int, Node*> newlist;
        Node* cur = head;
        int index = 0;
        while(cur)
        {
            mlist[cur] = index++;
            cur = cur->next;
        }
        index = 0;
        Node* node = new Node(head->val);
        Node* newhead = node;
        cur = head;
        while(cur)
        {
            newlist[index++] = newhead;
            if(cur->next)
            {
                newhead->next = new Node(cur->next->val);
            }
            else
            {
                newhead->next = nullptr;
            } 
            newhead = newhead->next;
            cur = cur->next;
        }
        cur = head;
        Node* newcur = node;
        while(cur)
        {
            if(cur->random)
            {
                newcur->random = newlist[mlist[cur->random]];
            }
            else
            {
                newcur->random = nullptr;
            }
            cur = cur->next;
            newcur = newcur->next;
        }
        return node;
    }
};
