// https://github.com/cub33/cpp-template/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())
const char nl = '\n';
const ll INF = (ll)1e6;

void solve() {
    int n;
    cin >> n;
    cout << n*(n+1)/2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs = 1;
    // cin >> tcs;
    while (tcs--)
      solve();
}
