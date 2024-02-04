//leetcode potd
class Solution {
public:
    string minWindow(string s, string t) {
        string ans="",temp="";
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<t.size();i++) mp1[t[i]]++;
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(mp1[s[i]]>0){
                mp2[s[i]]++;
                int f=1;
                for(auto it:mp1){
                    if(mp2[it.first]<it.second){
                        f=0;
                        break;
                    }
                }
                if(f==1){
                    if(ans=="") ans=temp;
                    else{
                        if(temp.size()<ans.size()) ans=temp;
                    }
                    int p=0;
                    while(1){
                        if(mp1[temp[0]]<1 or mp1[temp[0]]<mp2[temp[0]]){
                            if(mp2[temp[0]]>0) mp2[temp[0]]--;
                            temp.erase(0,1);
                            if(temp.size()<ans.size()) ans=temp;
                        }
                        else break;
                    }
                }
            }
        }
        return ans;
    }
};
