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
ll k;
void init()
{
    f[0] = 1;
    f[1] = 2;
    For(i, 2, 45)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

ll cal(ll x, ll y, ll end)
{
    if (y == 0)
    {
        if (x == 0)
            return 1;
        return 0;
    }
    ll sum = 0;
    for (ll i = end; i >= 0 && f[i] * y >= x; i--)
    {
        if (f[i] > x)
            continue;
        sum += cal(x - f[i], y - 1, i);
    }
    return sum;
}

void solve()
{
    ll n;
    cin >> n >> k;
    cout << cal(n, k, 44) << endl;
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
