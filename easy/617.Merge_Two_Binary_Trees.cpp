/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* root = nullptr;
        
        if (nullptr == t1 && nullptr == t2) return nullptr;
        else if (nullptr != t1 && nullptr != t2) {
            root = t1;
            root->val += t2->val;
            root->left = mergeTrees(t1->left, t2->left);
            root->right = mergeTrees(t1->right, t2->right);
        } else if (nullptr != t1 && nullptr == t2) {
            root = t1;
        } else if (nullptr == t1 && nullptr != t2) {
            root = t2;
        }
        return root;
    }
};