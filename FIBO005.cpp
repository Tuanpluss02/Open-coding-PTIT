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

ll f[45];
void init()
{
    f[0] = 1;
    f[1] = 1;
    For(i, 0, 46)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

ll cal(ll n, ll sum, ll i)
{
    if (n == 0)
        return 1;
    if (n == sum)
        return 1;
    if (sum > n)
        return 0;
    return cal(n, sum + f[i - 1], i - 1) + cal(n - f[i - 1], sum, i - 1);
}
void solve()
{
    ll n;
    cin >> n;
    ll i = 0;
    while (f[i] <= n)
        i++;
    cout << cal(n, 0, i - 1) << endl;
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
