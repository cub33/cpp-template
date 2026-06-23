// https://github.com/cub33/cpp-template/

#pragma GCC optimize("O3")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using db = double;
using int128 = __int128_t;
using ld = long double;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)(x).size())

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define sc second
#define fs first
#define cnl cout << '\n'

const char nl = '\n';
const ld PI = acosl(-1);
const ll INF = (ll)1e18;
const ll MOD = 1000000007;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

string s = "";
int n = 0;
// #define int long long
void solve() {
    int n;
    cin >> n;
    cout << n*(n+1)/2 << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();
}
