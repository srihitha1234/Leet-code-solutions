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
    void inorder(TreeNode* p, TreeNode* q,bool& result)
    {
        if(p==nullptr && q==nullptr)
            return;
        else if(p==nullptr)
        {
            result=false;
            return;
        }
        else if(q==nullptr)
        {
            result=false;
            return;
        }
        inorder(p->left,q->left,result);
        if(p->val!=q->val)
            result=false;
        inorder(p->right,q->right,result);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool result=true;
        inorder(p,q,result);
        
        return result;
    }
};