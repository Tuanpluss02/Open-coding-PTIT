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

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        a = (a * a);
        b >>= 1;
    }
    return ans;
}

bool process(ll n, ll m)
{
    ll x = n;
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
    if (n > 1)
        mp[n]++;
    ll ans = 1;
    for (auto i : mp)
    {
        ans *= (power(i.fi, i.se + 1) - 1) / (i.fi - 1);
    }
    if (ans - x == m)
        return true;
    return false;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clear();
    while (test--)
    {
        ll n, m;
        cin >> n >> m;
        if (m > n)
            swap(n, m);
        if (process(n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // pause();
    return 0;
}
