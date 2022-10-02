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
ll f[93];
ll k;
void init()
{
    f[0] = 0;
    f[1] = 1;
    For(i, 2, 93)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

ll cal(ll n, ll sum, ll idx, ll count)
{
    if (f[idx] >= n)
        return 0;
    sum += f[idx];
    if (sum == n && count == k)
        return 1;
    if (sum > n || count > k)
        return 0;
    ll a = cal(n, 0, idx + 1, count + 1);
    ll a1 = cal(n, sum, idx + 1, count + 1);
    ll a2 = cal(n - sum, sum, idx, count + 1);
    ll a3 = cal(n, sum, idx, count + 1);
    ll a4 = cal(n - sum, sum, idx, count + 1);
    return a + a1 + a2 + a3 + a4;
}

void solve()
{
    ll n;
    cin >> n >> k;
    cout << cal(n, 0, 1, 0) << endl;
}

int main()
{
    faster();
    init();
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
