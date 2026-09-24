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
    bool flag = true;
    int dfs(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int lefth = dfs(root->left);
        int righth = dfs(root->right);
        if(abs(lefth - righth) > 1)
        {
            flag = false;
        }
        return 1 + std::max(lefth, righth);
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return flag;
    }
};
