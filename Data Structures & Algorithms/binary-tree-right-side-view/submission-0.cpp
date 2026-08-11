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
#define pb push_back
class Solution {
public:
    vector<int> res;
    void solve(TreeNode* root,int lvl){
        if(!root) return;
        if(res.size()==lvl){
            res.pb(root->val);
        }
        solve(root->right,lvl+1);
        solve(root->left,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        solve(root,0);
        return res;
    }
};
