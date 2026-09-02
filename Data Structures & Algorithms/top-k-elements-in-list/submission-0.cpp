class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int a: nums)mp[a]++;
        priority_queue<pair<int, int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(k>0){
            auto top = pq.top();
            pq.pop();
            ans.push_back(top.second);
            k--;
        }
        return ans;
    }
};
