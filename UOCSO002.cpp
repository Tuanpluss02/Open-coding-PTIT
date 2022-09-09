#include <bits/stdc++.h>
#define s second
#define f first
#define ll long long

ll cal(ll a, ll b)
{
    return (pow(a, b + 1) - 1) / (a - 1);
}

using namespace std;
void solve()
{
    ll n;
    cin >> n;
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
    cout << m.size() << endl;
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