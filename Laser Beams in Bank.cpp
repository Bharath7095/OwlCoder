class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int c1=0,c2,ans=0;
        for(int i=0;i<bank[0].length();i++)
        {
            if(bank[0][i]=='1') c1++;
        }
        for(int i=1;i<bank.size();i++)
        {
            c2=0;
            for(int j=0;j<bank[i].size();j++) 
            {
                if(bank[i][j]=='1') c2++;
            }
            if(c2!=0){
                ans+=c1*c2;
                c1=c2;
            }
        }
        return ans;
    }
};
