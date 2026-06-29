class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = 2*nums.size();
        vector<int> one(n);
        for(int i = 0 ; i < nums.size(); i++){
            one[i]=nums[i];
        }

        for(int i = nums.size();i<n;i++){
            one[i]=nums[i-nums.size()];
        }
        return one;
    }
};