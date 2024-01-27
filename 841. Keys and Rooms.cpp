class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,0);
        vis[0]=1;
        stack<int>st;
        for(int i=0;i<rooms[0].size();i++){
            st.push(rooms[0][i]);
        }
        while(!st.empty()){
            int x=st.top();
            st.pop();
            vis[x]=1;
            for(int i=0;i<rooms[x].size();i++){
                if(vis[rooms[x][i]]==0) st.push(rooms[x][i]);
            }
        }
        for(int i=0;i<n;i++) if(vis[i]==0) return false;
        return true;
    }
};
