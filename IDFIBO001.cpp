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
#define lli unsigned long long ll
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

ll pro(ll n)
{
    ll prevv = 1, prev = 2, cur = 3;
    while (n > 0)
    {
        prevv = prev;
        prev = cur;
        cur = prevv + prev;
        n = n - (cur - prev - 1);
    }

    n = n + (cur - prev - 1);
    return prev + n;
}

void solve()
{
    ll n;
    cin >> n;
    cout << pro(n) << endl;
}

int main()
{
    faster();
    ll test = 1;
    cin >> test;
    // clear();
    while (test--)
    {
        solve();
    }
    return 0;
}
