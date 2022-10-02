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
ll cal(ll n)
{
    ll res = 0;
    ll tmp = 5;
    while (tmp <= n)
    {
        res += n / tmp;
        tmp *= 5;
    }
    return res;
}
void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 5 << endl;
        return;
    }
    ll l = 1, r = 5 * n;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        if (cal(mid) >= n)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << endl;
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
