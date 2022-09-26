#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clear() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
ll n, k, m;

ll fact(ll n, ll m)
{
    ll res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res = (res * i) % m;
    }
    return res;
}

ll power(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return res;
}

ll C(ll N, ll K)
{
    if (K > N)
    {
        return 0;
    }
    return (((fact(n, m) * power(fact(n - k, m), m - 2)) % m) * power(fact(k, m), m - 2)) % m;
}

void solve()
{

    cin >> n >> k >> m;
    cout << C(n, k) << endl;
}
int main()
{
    faster();

    int test = 1;
    cin >> test;
    // clear();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
