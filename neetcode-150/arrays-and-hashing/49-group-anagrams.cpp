class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> v;
        for (auto e : strs) {
            string k = generateKey(e);
            m[k].push_back(e);
        }
        for (auto p : m) v.push_back(p.second);
        return v;
    }
private:
    string generateKey(string s) {
        vector<int> v(26);
        for (auto c : s) v[c - 'a']++;
        string k = to_string(v[0]);
        for (int i = 1; i < v.size(); i++) k += ',' + to_string(v[i]);
        return k;
    }
};
