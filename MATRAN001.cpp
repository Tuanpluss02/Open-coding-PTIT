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
    ll n, m;
    cin >> n >> m;
    ll a[n + 5][m + 5], dp[n + 5][m + 5];
    For(i, 0, n + 2)
    {
        For(j, 0, m + 2)
        {
            if (i == 0 || j == 0 || i == n + 1 || j == m + 1)
                a[i][j] = 0;
            else
                cin >> a[i][j];
            dp[i][j] = a[i][j];
        }
    }
    For(i, 2, n + 1)
    {
        For(j, 1, m + 1)
        {
            dp[i][j] += max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i - 1][j + 1]));
        }
    }
    ll res = 0;
    For(i, 1, m + 1)
    {
        res = max(res, dp[n][i]);
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
