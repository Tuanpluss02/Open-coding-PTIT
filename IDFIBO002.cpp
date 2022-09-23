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

ll fib[93];
ll a[90];

void process()
{
    fib[0] = 0;
    fib[1] = 1;
    For(i, 2, 94)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (!(fib[i] & 1))
            a[i] = fib[i];
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll i = 0;
    ll res = 0;
    while (a[i] <= n)
    {
        res += a[i];
        i++;
    }
    cout << res << endl;
}
int main()
{
    faster();
    process();
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
