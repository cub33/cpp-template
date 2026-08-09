// https://github.com/cub33/cpp-template/
// https://github.com/cub33/cpp-template/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())
const char nl = '\n';
const ll INF = (ll)1e18;
#define int long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pii pair<int, int>


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
    int n;
    cin >> n;
    cout << n-(n%2) << nl;
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
