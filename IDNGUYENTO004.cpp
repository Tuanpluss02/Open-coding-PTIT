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
    ll n;
    cin >> n;
    ll mx = -1e9;
    while (!(n & 1))
    {
        mx = max(mx, 2ll);
        n >>= 1;
    }
    while (n % 3 == 0)
    {
        mx = max(mx, 3ll);
        n /= 3;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            mx = max(mx, i);
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            mx = max(mx, i + 2);
            n /= (i + 2);
        }
    }
    if (n > 1)
        mx = max(mx, n);
    cout << mx << endl;
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
    // pause();
    return 0;
}
