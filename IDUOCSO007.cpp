#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
map<ll, ll> x;
vec v;
void pro(ll n)
{

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
                v.pb(i);
            else
            {
                v.pb(i);
                v.push_back(n / i);
            }
        }
    }
}
void pro1(ll n)
{

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
                x[i]++;
            else
            {
                x[i]++;
                x[n / i]++;
            }
        }
    }
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
        pro(n);
        pro1(m);
        ll ans = 0;
        for (auto i : v)
        {
            if (!x[i])
            {
                ans += i;
            }
        }
        cout << ans << endl;
        x.clear();
        v.clear();
    }
    // pause();
    return 0;
}
