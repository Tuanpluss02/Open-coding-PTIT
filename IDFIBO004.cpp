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
ll f[94];
map<ll, ll> m;
void pro()
{
    f[0] = 0;
    f[1] = 1;
    m[0] = 0;
    m[1] = 1;
    for (int i = 2; i < 94; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        m[f[i]] = i;
    }
}

ll binary_s(ll l, ll r, ll x)
{
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (f[mid] == x)
            return mid;
        if (f[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

void solve()
{
    ll n;
    cin >> n;
    int idx = 0;
    For(i, 0, 94)
    {
        idx = binary_s(0, 93, n - f[i]);
        if (idx != -1)
        {
            cout << f[i] << " " << n - f[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    faster();
    pro();
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