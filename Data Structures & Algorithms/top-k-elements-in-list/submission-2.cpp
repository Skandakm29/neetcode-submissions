class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<
                    pair<int,int>,
                    vector<pair<int,int>>,
                    greater<pair<int,int>>
                    >pq;
        for(auto &p:mp){
            pq.push({p.second,p.first});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            int x=pq.top().second;
            ans.push_back(x);
            pq.pop();
        }
        return ans;
    }
};
