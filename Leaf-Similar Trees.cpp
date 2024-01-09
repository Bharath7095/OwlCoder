class Solution {
public:
    void preorder(TreeNode* root,vector<int>&vt)
    {
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) vt.push_back(root->val);
        preorder(root->left,vt);
        preorder(root->right,vt);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>vt1;
        vector<int>vt2;
        preorder(root1,vt1);
        preorder(root2,vt2);
        if(vt1.size()!=vt2.size()) return false;
        for(int i=0;i<vt1.size();i++)
        {
            if(vt1[i]!=vt2[i]) return false;
        }
        return true;
    }
};
