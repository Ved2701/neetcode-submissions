class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const string& s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            res[sorted_s].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto& pair : res) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};