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
    ll n, k, res = 0;
    cin >> n >> k;
    vec v(n);
    For(i, 0, n) cin >> v[i];
    if (k == n)
    {
        cout << 1 << endl;
        return;
    }
    sortu(v);
    ll idx = 0, mx = 0;
    while (idx + 1 <= k)
    {
        mx += v[idx];
        idx++;
    }
    ll tmp = mx;
    tmp -= v[idx - 1];
    For(i, idx, n)
    {
        if (tmp + v[i] == mx)
        {
            res++;
        }
        else if (tmp + v[i] > mx)
        {
            break;
        }
    }
    cout << res + 1 << endl;
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
