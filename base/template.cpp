// https://github.com/cub33/cpp-template/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())
#define pii pair<int,int>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    pii n = {a, b};
    pii k = {c, d};
    if (n.first==k.second*2 && n.second*2==k.first)
        YES;
    else
        NO;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs = 1;
    // cin >> tcs;
    while (tcs--)
      solve();
}
