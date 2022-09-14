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