//leetcode potd
int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        if(n==1 and m==0) return 1;
        vector<int>in(n,0);
        vector<int>out(n,0);
        vector<int>vt;
        for(int i=0;i<m;i++)
        {
            in[adj[i][1]]++;
            out[adj[i][0]]++;
        }
        for(int i=0;i<n;i++)
        {
            vt.push_back(abs(in[i]-out[i]));
        }
        set<int>s(vt.begin(),vt.end());
        if(s.size()==8) return 1;
        return 0;
    }
