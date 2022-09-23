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

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m], dp[n + 1][m + 1];
    For(i, 0, n)
    {
        For(j, 0, m)
        {
            cin >> a[i][j];
            dp[i][j] = a[i][j];
        }
    }
    ll x, y;
    cin >> x >> y;
    // shortest path
    For(i, 0, n)
    {
        For(j, 0, m)
        {
            if (i == 0)
            {
                if (j > 0 && j < m - 1)
                    dp[i][j] += min(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    cout << dp[x - 1][y - 1] << endl;
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
    pause();
    return 0;
}
