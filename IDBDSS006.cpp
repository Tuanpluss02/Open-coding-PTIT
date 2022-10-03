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

ll dp[101][21][201];
bool tmp[1002];
vec prime;

void sieve()
{
    memset(tmp, true, sizeof(tmp));
    for (ll i = 2; i * i < 1002; i++)
    {
        if (tmp[i])
        {
            for (ll j = i * i; j < 1002; j += i)
            {
                tmp[j] = false;
            }
        }
    }
    For(i, 2, 1002)
    {
        if (tmp[i])
            prime.pb(i);
    }
}

ll process(ll i, ll j, ll sum, ll n, ll k)
{
    if (i > prime.size() || sum > n)
        return 0;
    if (sum == n)
    {
        if (j == k)
            return 1;
        return 0;
    }
    if (j == k)
        return 0;
    if (dp[i][j][sum])
        return dp[i][j][sum];
    ll a = process(i + 1, j, sum, n, k);
    ll b = process(i + 1, j + 1, sum + prime[i], n, k);
    return dp[i][j][sum] = a + b;
}

void solve()
{
    memset(dp, 0, sizeof(dp));
    ll n, k;
    cin >> n >> k;
    cout << process(0, 0, 0, n, k) << endl;
}

int main()
{
    faster();
    sieve();
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
