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
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

ll power(ll n, ll k)
{
    ll ans = 1;
    while (k)
    {
        if (k & 1)
        {
            ans = ans * n;
        }
        n = n * n;
        k >>= 1;
    }
    return ans;
}

ll cal(ll n, ll k)
{
    if (n == 0)
        return 1;
    if (k == 0)
        return 1;
    if (n >= power(2, k))
    {
        ll sum = power(2, k);
        return cal(n - sum, k) + cal(n, k - 1);
    }
    else
    {
        return cal(n, k - 1);
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll k = log2(n);
    cout << cal(n, k) << endl;
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