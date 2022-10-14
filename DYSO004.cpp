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

void solve()
{
    ll n;
    cin >> n;
    ll a[n + 5], dp[n + 1];
    For(i, 1, n + 1)
    {
        cin >> a[i];
    }
    dp[1] = 1;
    ll res = 1;
    For(i, 2, n + 1)
    {
        ll l = 1, r = res, j = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (a[dp[mid]] < a[i])
            {
                j = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (j == res)
            dp[++res] = i;
        if (a[dp[j + 1]] > a[i])
            dp[j + 1] = i;
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
