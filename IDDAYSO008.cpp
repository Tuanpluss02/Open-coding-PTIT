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

void solve()
{
    ll n, sum = 0;
    cin >> n;
    ll arr[n + 1];
    For(i, 0, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    bool dp[n + 1][sum + 1];
    For(i, 0, n + 1)
        dp[i][0] = true;
    For(i, 1, sum + 1) dp[0][i] = false;

    For(i, 1, n + 1)
    {
        For(j, 1, sum + 1)
        {
            dp[i][j] = dp[i - 1][j];
            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }
    ll res = 1e15;
    Forr(j, sum / 2, 0)
    {
        if (dp[n][j])
        {
            res = sum - 2 * j;
            break;
        }
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