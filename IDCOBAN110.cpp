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
#define For(i, a, b) for (lli i = a; i < b; ++i)
#define Forr(i, a, b) for (lli i = a; i >= b; --i)
#define vec vector<lli>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
lli a[1001];
map<lli, lli> m;
lli count_div(lli n)
{

    lli res = 1;
    map<lli, lli> m;
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
    for (lli i = 5; i * i <= n; i += 6)
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
        res *= (i.second + 1);
    }
    return res;
}

void pre()
{
}

void solve()
{
    lli n;
    // cin >> n;
    // cout << m[n] << endl;
}
int main()
{
    faster();
    pre();
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
