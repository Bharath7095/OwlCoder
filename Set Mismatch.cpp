//leetcode
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int a=0,b=0;
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0)  a=i;
            else if(mp[i]==2)  b=i;
        }
        return {b,a};
    }
};
