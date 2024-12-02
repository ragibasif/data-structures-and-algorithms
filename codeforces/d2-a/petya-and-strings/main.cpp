#include <bits/stdc++.h>
using namespace std;

// Aliases
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// Macros
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// Loops
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define EACH(x, v) for (auto &x : v)

// Debugging
#define debug(x) cerr << #x << " = " << (x) << endl

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// Utility functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll modAdd(ll a, ll b, ll m = MOD) { return ((a % m + b % m) % m); }
ll modMul(ll a, ll b, ll m = MOD) { return ((a % m * b % m) % m); }
ll modPow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    fastIO();

    int t; // Number of test cases
    cin >> t;
    while (t--) {
        // Solve each test case
        int n;
        cin >> n;
        vi arr(n);
        FOR(i, 0, n) cin >> arr[i];

        // Example logic (replace with actual problem-solving logic)
        sort(all(arr));
        EACH(x, arr) cout << x << " ";
        cout << "\n";
    }

    return 0;
}


