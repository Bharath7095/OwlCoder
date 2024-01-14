//gfg
class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int>vt;
        map<vector<int>,int>mp;
        for(int i=0;i<M;i++){
            mp[matrix[i]]++;
            if(mp[matrix[i]]>1) vt.push_back(i);
        }
        return vt;
        
    } 
};
