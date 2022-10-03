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

ll cal(ll n, ll k)
{
    ll res[n + 1][k + 1];
    For(i, 0, n + 1)
    {
        For(j, 0, min(i, k) + 1)
        {
            if (j == 0 || j == i)
                res[i][j] = 1;
            else
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
    }
    return res[n][k];
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << 0 << endl;
        return;
    }
    cout << cal(n - 1, k - 1) << endl;
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