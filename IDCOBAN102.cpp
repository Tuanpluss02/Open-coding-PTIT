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

ll cal(ll a, ll b)
{
    return (pow(a, b + 1) - 1) / (a - 1);
}

using namespace std;
ll sum_dev(ll n)
{
    ll res = 1;
    map<ll, ll> m;
    while (!(n & 1))
    {
        n >>= 1;
        m[2]++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        m[3]++;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            n /= i;
            m[i]++;
        }
        while (n % (i + 2) == 0)
        {
            n /= (i + 2);
            m[i + 2]++;
        }
    }
    if (n > 1)
        m[n]++;
    for (auto i : m)
    {
        res *= cal(i.fi, i.se);
    }
    return res;
}

ll power(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a);
        a = (a * a);
        n >>= 1;
    }
    return ans;
}

void solve()
{
    ll x;
    cin >> x;
    // cout << 2004 * 2004 << endl;
    // cout << sum_dev(power(2004, x)) % 29 << endl;
    // cout << sum_dev(2004) << endl;
    For(i, 1, 2005)
    {
        if (2004 % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    For(i, 1, 4016017)
    {
        if (4016016 % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}