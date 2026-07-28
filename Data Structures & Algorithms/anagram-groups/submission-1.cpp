class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        for (const string& s : strs){
            string sor = s;
            sort(sor.begin(),sor.end());
            mp[sor].push_back(s);
        }
        vector <vector<string>> ans;
        for (auto& i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};