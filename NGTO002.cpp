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

int prime[5800000], idx = 0;
void sieve()
{
#define MAXL (100000000 >> 5) + 1
#define GET(x) (mark[x >> 5] >> (x & 31) & 1)
#define SET(x) (mark[x >> 5] |= 1 << (x & 31))
    static int mark[MAXL] = {};
    SET(1);
    int n = 100000000;
    for (int i = 2; i <= n; i++)
    {
        if (!GET(i))
        {
            for (int k = n / i, j = i * k; k >= i; k--, j -= i)
                SET(j);
            prime[idx++] = i;
        }
    }
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll res = 0;
    For(i, 0, idx)
    {
        if (prime[i] >= l && prime[i] <= r)
            res++;
        if (prime[i] > r)
            break;
    }
    cout << res << endl;
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
