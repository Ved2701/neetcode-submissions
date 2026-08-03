class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector <int> ans;
        for (int i : nums){
            mp[i]++;
        }
        for (auto& ptr: mp){
            if (ptr.second > 1) return true;
        }
        return false;
    }
};