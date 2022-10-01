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

void solve()
{
    ll n;
    cin >> n;
    vec v(n);

    For(i, 0, n)
    {
        cin >> v[i];
    }
    sortu(v);
    ll res = 0;
    ll tmp;
    while (v.size() > 1)
    {
        tmp = v[0] + v[1];
        res += tmp;
        v.erase(v.begin());
        v.erase(v.begin());
        v.pb(tmp);
        sortu(v);
    }
    cout << res << endl;
}
// 2 4 1 2 10 2 3
// 2 2 3 4 10
// 3 4 10
// 4 10

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
