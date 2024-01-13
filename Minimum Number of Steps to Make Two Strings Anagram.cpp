//leetcode
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            mp2[t[i]]++;
        }
        int c1=0,c2=0;
        for(auto it:mp1){
            if(mp2[it.first]<it.second ){
                c1+=(abs(mp2[it.first]-it.second));
            }
        }
        for(auto it:mp2){
            if(mp1[it.first]<it.second){
                c2+=(abs(mp1[it.first]-it.second));
            }
        }
        if(c1<c2) return c1;
        return c2;
    }
};
