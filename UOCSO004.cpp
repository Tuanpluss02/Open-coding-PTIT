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
    ll n;
    cin >> n;
    ll tmp = n;
    map<ll, ll> mp;
    while (!(n & 1))
    {
        mp[2]++;
        n >>= 1;
    }
    while (n % 3 == 0)
    {
        mp[3]++;
        n /= 3;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            mp[i + 2]++;
            n /= (i + 2);
        }
    }
    if (n > 2)
        mp[n]++;
    ll res = 1;
    for (auto i : mp)
        res *= i.fi;
    if (res < tmp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
