#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        a = (a * a);
        b >>= 1;
    }
    return ans;
}

ll cal(ll n, ll m, ll x)
{
    ll ans = power(x, m);
    if (ans == n)
        return 1;
    if (ans > n)
        return 0;
    ll a1 = cal(n - ans, m, x + 1);
    ll a2 = cal(n, m, x + 1);
    return a1 + a2;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    cout << cal(n, m, 1) << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
