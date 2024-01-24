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
    int ans;
    void traverse(TreeNode* root,vector<int>vt)
    {
        if(root==NULL) return;
        vt[root->val]++;
        if(root->left==NULL && root->right==NULL){
            int od=0;
            for(int i=0;i<10;i++){
                if(vt[i]%2!=0) od++;
            }
            if(od<=1) ans++;
        }
        traverse(root->left,vt);
        traverse(root->right,vt);
        vt[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        ans=0;
        vector<int>vt(10,0);
        traverse(root,vt);
        return ans;
    }
};
