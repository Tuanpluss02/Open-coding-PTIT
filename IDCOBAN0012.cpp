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

#define MAX 500

ll mul(ll x, ll res[], ll len)
{
    ll car = 0;
    for (ll i = 0; i < len; i++)
    {
        ll tmp = res[i] * x + car;
        res[i] = tmp % 10;

        car = tmp / 10;
    }

    while (car)
    {
        res[len] = car % 10;
        car = car / 10;
        len++;
    }
    return len;
}

void fact(ll n)
{
    ll res[MAX];
    res[0] = 1;
    ll len = 1;
    for (ll x = 2; x <= n; x++)
        len = mul(x, res, len);

    for (ll i = len - 1; i >= 0; i--)
        cout << res[i];
}

void solve()
{
    ll n;
    cin >> n;
    fact(n);
    cout << endl;
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
