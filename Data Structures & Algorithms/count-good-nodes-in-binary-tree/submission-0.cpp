/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int res = 0;
    void dfs(TreeNode* root, int curmax)
    {
        if(!root)
        {
            return;
        }
        if(root->val >= curmax)
        {
            res ++;
        }
        curmax = max(curmax, root->val);
        dfs(root->left, curmax);
        dfs(root->right, curmax);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,-100);
        return res;
    }
};
