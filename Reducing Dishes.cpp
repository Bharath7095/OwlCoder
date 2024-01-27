class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int ans=0,su=0,ind=-9,k=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=0){
                if(ind==-9) ind=i;
                ans+=(k*s[i]);
                k++;
                su+=s[i];
            }
        }
        for(int i=ind-1;i>=0;i--){
            if((ans+su+s[i])>=ans){
                ans+=(su+s[i]);
                su+=s[i];
            }
            else break;
        }
        return ans;
    }
};
