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

vec prime;
ll idx, k;
void sieve(int n)
{
#define MAXL (int(1e8) >> 5) + 1
#define isComp(n) (flag[n >> 5] & (1 << (n & 31)))
#define setComp(n) (flag[n >> 5] |= (1 << (n & 31)))
    static int flag[MAXL] = {};
    setComp(1);
    for (int i = 2; i <= n; i++)
    {
        if (!isComp(i))
        {
            for (int k = n / i, j = i * k; k >= i; k--, j -= i)
                setComp(j);
            prime.pb(i);
        }
    }
}

ll process(ll n, ll sum, ll index)
{
    sum += prime[index];
    if (sum == n && index == k - 1)
        return 1;
    if (sum > n || index + 1 > k)
        return 0;
    ll a = process(n, sum, index + 1);
    ll b = process(n, sum - prime[index], index);
    return a + b;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    // cout << process(n, 1, 1) << endl;
    for (auto i : prime)
    {
        cout << i << " ";
    }
}

int main()
{
    faster();
    sieve(1e6);
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
