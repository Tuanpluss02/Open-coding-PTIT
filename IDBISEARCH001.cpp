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

void solve()
{
    ll n, m, tmp;
    cin >> n >> m;
    map<ll, ll> mp;
    For(i, 0, n)
    {
        cin >> tmp;
        if (!mp.count(tmp))
            mp[tmp] = i + 1;
    }
    For(i, 0, m)
    {
        cin >> tmp;
        if (mp.count(tmp))
        {
            cout << mp[tmp] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    faster();
    int test = 1;
    while (test--)
    {
        solve();
    }
    return 0;
}