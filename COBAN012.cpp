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

bool check(ll n)
{
    string s = to_string(n);
    string tmp = s;
    rev(s);
    if (s == tmp)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << n << endl;
        return;
    }
    pair<ll, ll> a, b;
    For(i, n, 1e15)
    {
        if (check(i))
        {
            a.fi = i;
            a.se = abs(i - n);
            break;
        }
    }
    Forr(i, n, 1)
    {
        if (check(i))
        {
            b.fi = i;
            b.se = abs(i - n);
            break;
        }
    }
    if (a.se == b.se)
    {
        cout << min(a.fi, b.fi) << " " << max(a.fi, b.fi);
    }
    else
    {
        cout << (a.se < b.se ? a.fi : b.fi);
    }
    cout << endl;
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
