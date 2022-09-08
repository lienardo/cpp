#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int cnt = 1, mx = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) mx = max(++cnt, mx);
        else cnt = 1;
    }
    cout << mx << '\n';
    return 0;
}
