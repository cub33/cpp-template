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

#ifdef LOCAL
#include <chrono>
auto start = chrono::high_resolution_clock::now();
void runms() {
    auto end = chrono::high_resolution_clock::now();
    auto dur = chrono::duration_cast<chrono::milliseconds>(end- start);
    cerr << "\n" << dur.count() << "ms\n";
}
#else
void runms() {}
#endif

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    pii n = {a, b};
    pii k = {c, d};
    if (n.first==k.second*3 && n.second*2==k.first)
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
    runms();
}
