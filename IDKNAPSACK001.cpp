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
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

ll solve(ll W, ll wt[], ll val[], ll n)
{
    ll dp[W + 1];
    memset(dp, 0, sizeof(dp));

    for (ll i = 1; i < n + 1; i++)
    {
        for (ll w = W; w >= 0; w--)
        {

            if (wt[i - 1] <= w)
                dp[w] = max(dp[w], dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W];
}

int main()
{
    faster();
    ll test = 1;
    cin >> test;
    // clear();
    while (test--)
    {
        ll n, w;
        cin >> n >> w;
        ll val[n], wt[n];

        For(i, 0, n)
        {
            cin >> wt[i];
        }
        For(i, 0, n)
        {
            cin >> val[i];
        }
        cout << solve(w, wt, val, n) << endl;
    }
    // pause();
    return 0;
}
