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
    void symmetric(TreeNode* root1, TreeNode* root2, bool& result)
    {
        if(root1==nullptr &&root2==nullptr)
            return;
        if(root1==nullptr || root2==nullptr)
        {
            result=false;
            return;
        }
        symmetric(root1->right,root2->left,result);
        symmetric(root1->left,root2->right,result);
        if(root1->val!=root2->val)
            result=false;
    }
    bool isSymmetric(TreeNode* root) {
        bool result=true;
        symmetric(root->right,root->left,result);
        return result;
    }
};