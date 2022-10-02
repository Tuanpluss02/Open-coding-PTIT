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
#define lli unsigned long long
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
ll cal(ll n, ll m)
{
    ll dp[m + 1][n + 1];
    For(i, 0, n + 1)
    {
        dp[1][i] = 1;
    }
    ll sum;

    For(i, 2, m + 1)
    {
        For(j, 0, n + 1)
        {
            sum = 0;
            For(k, 0, j + 1)
            {
                sum += dp[i - 1][k];
            }
            dp[i][j] = sum;
        }
    }
    return dp[m][n];
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << cal(n, k) << endl;
}

int main()
{
    faster();
    ll test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
