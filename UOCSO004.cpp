#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define N 100000000
#define mod 100000007

int *prime = new int[N], idx = 0;
int *m = new int[N];

void sieve()
{
    memset(m, 0, sizeof(m));
#define MAXL (N >> 5) + 1
#define GET(x) (mark[x >> 5] >> (x & 31) & 1)
#define SET(x) (mark[x >> 5] |= 1 << (x & 31))
    static int mark[MAXL] = {};
    SET(1);
    int n = 1e9;
    for (int i = 2; i <= n; i++)
    {
        if (!GET(i))
        {
            for (int k = n / i, j = i * k; k >= i; k--, j -= i)
                SET(j);
            prime[idx++] = i;
            m[i] = true;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll i = 0;
    while (m[n] == false)
    {
        ll count = 0;
        while (n % prime[i] == 0)
        {
            count++;
            n /= prime[i];
        }
        if (count >= 2)
        {
            cout << "YES" << endl;
            return;
        }
        i++;
    }
    cout << "NO" << endl;
}

int main()
{
    faster();
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    system("pause");
    return 0;
}
