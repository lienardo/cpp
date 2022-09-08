#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, el, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> el;
        sum += el;
    }
    cout << n * (n + 1) / 2 - sum << '\n';
    return 0;
}
