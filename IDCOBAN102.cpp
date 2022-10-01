#include <bits/stdc++.h>
#define s second
#define f first
#define ll long long

ll cal(ll a, ll b)
{
    return (pow(a, b + 1) - 1) / (a - 1);
}

using namespace std;
ll sum_dev(ll n)
{
    ll res = 1;
    map<ll, ll> m;
    while (!(n & 1))
    {
        n >>= 1;
        m[2]++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        m[3]++;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            n /= i;
            m[i]++;
        }
        while (n % (i + 2) == 0)
        {
            n /= (i + 2);
            m[i + 2]++;
        }
    }
    if (n > 1)
        m[n]++;
    for (auto i : m)
    {
        res *= cal(i.f, i.s);
    }
    return res;
}

ll power(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a);
        a = (a * a);
        n >>= 1;
    }
    return ans;
}

void solve()
{
    ll x;
    cin >> x;
    cout << sum_dev(power(2004, x)) % 29 << endl;
    // cout << sum_dev(2004) << endl;
}

int main()
{
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}