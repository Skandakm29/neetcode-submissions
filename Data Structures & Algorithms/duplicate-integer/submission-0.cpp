class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto &p:mp){
            if(p.second>1){
                return true;
            }
        }
        return false;
    }
};