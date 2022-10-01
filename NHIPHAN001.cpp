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
#define lli unsigned long long
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

lli toDec(string s, ll n)
{
    lli res = 0;
    For(i, 0, n)
    {
        if (s[i] == '1')
            res |= 1 << (n - i - 1);
    }
    return res;
}

void solve()
{
    ll n;
    string a, b;
    cin >> n >> a >> b;
    lli x = toDec(a, n);
    lli y = toDec(b, n);
    if (x == y)
    {
        cout << 0 << endl;
    }
    else
        cout << (x > y ? x - y - 1 : y - x - 1) << endl;
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
