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
ll pre[2004];

ll power(ll n, ll x)
{
    ll ans = 1;
    while (x)
    {
        if (x & 1)
            ans = (ans * n) % 29;
        n = (n * n) % 29;
        x >>= 1;
    }
    return ans;
}

void solve()
{
    ll x;
    cin >> x;

    memset(pre, 0, sizeof(pre));
    int num = 2004;
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            pre[i] += x;
            num /= i;
        }
    }

    ll res = 1;
    for (int i = 2; i <= 2004; i++)
    {
        if (pre[i])
            res = res * (power(i, pre[i] + 1) + 28) * power(i - 1, 27) % 29;
    }
    cout << res << endl;
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
