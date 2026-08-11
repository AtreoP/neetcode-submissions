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
    int maxima(TreeNode* root,int maxval){
        if(!root) return 0;
        int res=(root->val>=maxval)?1:0;
        maxval=max(maxval,root->val);
        res+=maxima(root->left,maxval);
        res+=maxima(root->right,maxval);
        return res;
    }
    int goodNodes(TreeNode* root) {
        return maxima(root,root->val);
    }
};
