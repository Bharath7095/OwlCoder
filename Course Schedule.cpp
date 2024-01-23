//gfg potd
class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> p) 
    {
        //code here
        vector<vector<int>>adj(n);
        vector<int>in(n,0);
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][1]].push_back(p[i][0]);
        }
        for(int i=0;i<m;i++)
        {
            in[p[i][0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            ans.push_back(t);
            for(auto it: adj[t]){
                in[it]--;
                if(in[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==n) return ans;
        ans.clear();
        return ans;
    }
};
