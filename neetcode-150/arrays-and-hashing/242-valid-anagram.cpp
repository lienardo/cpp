class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> v(26);
        for (auto c : s) v[c - 'a']++;
        for (auto c : t) {
            v[c - 'a']--;
            if (v[c - 'a'] < 0) return false;
        }
        return true;
    }
};
