class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>vt;
        vt.push_back(nums[0]);
        int l=1;
        for(int i=1;i<nums.size();i++)
        {
            if(vt[l-1]<nums[i])
            {
                vt.push_back(nums[i]);
                l++;
            }
            else{
                int index=lower_bound(vt.begin(),vt.end(),nums[i])-vt.begin();
                vt[index]=nums[i];
            }
        }
        return vt.size();
    }
};
