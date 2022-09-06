class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> v(26);
        for (const int& e : s) {
            v[e - 'a']++;
        }
        for (const int& e : t) {
            v[e - 'a']--;
            if (v[e - 'a'] < 0) return false;
        }
        return true;
    }
};
