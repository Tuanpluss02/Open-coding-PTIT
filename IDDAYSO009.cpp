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

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll cursum = 0;
    ll mxsum = 0;
    For(i, 0, n)
    {
        cursum += (s[i] == '0' ? 1 : -1);
        if (cursum < 0)
            cursum = 0;
        mxsum = max(cursum, mxsum);
    }
    if (mxsum == 0)
    {
        cout << -1;
    }
    else
    {
        cout << mxsum;
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