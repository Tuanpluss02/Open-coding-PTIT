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

ll kadane(vector<ll> a, ll n)
{
    ll res = INT_MIN, tmp = 0;
    For(i, 0, n)
    {
        tmp = tmp + a[i];
        if (res < tmp)
            res = tmp;
        if (tmp < 0)
            tmp = 0;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    For(i, 0, n) cin >> a[i];
    ll ans = kadane(a, n);
    cout << ans << endl;
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
