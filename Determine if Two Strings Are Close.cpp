//leetcode
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1=word1.length(),l2=word2.length();
        if(l1!=l2) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>vt1;
        vector<int>vt2;
        for(int i=0;i<l1;i++) mp1[word1[i]]++;
        for(int i=0;i<l2;i++) mp2[word2[i]]++;
        for(auto it:mp1){
            if(mp2[it.first]==0) return false;
        }
        for(auto it:mp2){
            if(mp1[it.first]==0) return false;
        }
        for(auto it:mp1) vt1.push_back(it.second);
        for(auto it:mp2) vt2.push_back(it.second);
        sort(vt1.begin(),vt1.end());
        sort(vt2.begin(),vt2.end());
        if(vt1.size()!=vt2.size()) return false;
        for(int i=0;i<vt1.size();i++){
            if(vt1[i]!=vt2[i]) return false;
        }
        return true;
    }
};
