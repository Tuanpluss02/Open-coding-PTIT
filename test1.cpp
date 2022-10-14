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
    ll n, tmp;
    cin >> n;
    map<int, int> m1, m2;
    m1[0] = m1[1] = m2[0] = m2[1] = 0;
    For(i, 0, n)
    {
        cin >> tmp;
        m1[tmp]++;
    }
    For(i, 0, n)
    {
        cin >> tmp;
        m2[tmp]++;
    }
    if (m1[0] == m2[0] && m1[1] == m2[1])
        cout << 0 << endl;
    else
        cout << min(abs(m1[0] - m2[0]), abs(m1[1] - m2[1])) << endl;
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
