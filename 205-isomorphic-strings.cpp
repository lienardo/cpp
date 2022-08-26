class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mS, mT;
        for (int i = 0; i < s.size(); i++) {
            auto itS = mS.find(s[i]), itT = mT.find(t[i]);
            if ((itS != mS.end() && itS->second != t[i]) || (itT != mT.end() && itT->second != s[i])) {
                return false;
            }
            mS[s[i]] = t[i];
            mT[t[i]] = s[i];
        }
        return true;
    }
};
