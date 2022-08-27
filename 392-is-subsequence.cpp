class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pS, pT;
        pS = pT = 0;
        while (pS < s.size() && pT < t.size()) {
            if (s[pS] == t[pT]) {
                pS++;
            }
            pT++;
        }
        return pS == s.size();
    }
};
