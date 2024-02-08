//leetcode potd
class Solution {
public:
    int dp[10001];
    int perfect(int n,vector<int>&vt)
    {
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int ans=INT_MAX;
        for(int i=0;i<vt.size();i++){
            if((n-vt[i])>=0){
                ans=min(ans,1+perfect(n-vt[i],vt));
            }
        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        int s=sqrt(n);
        vector<int>vt;
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<=s;i++) vt.push_back(i*i);
        return perfect(n,vt);
    }
};
