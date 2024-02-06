class Solution
{
    public:
    void traverse(Node *root,map<Node*,int>&mp,int c,int k,vector<Node*>&vt){
        if(root==NULL) return;
        vt.push_back(root);
        if(root->left==NULL and root->right==NULL){
            if(c-k>=0) mp[vt[c-k]]++;
        }
        traverse(root->left,mp,c+1,k,vt);
        traverse(root->right,mp,c+1,k,vt);
        vt.pop_back();
    }
    //Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	map<Node*,int>mp;
    	vector<Node*>vt;
    	traverse(root,mp,0,k,vt);
    	return mp.size();
    }
};
