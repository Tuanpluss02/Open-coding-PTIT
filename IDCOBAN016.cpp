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
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
ll num[1000001];
void solve()
{
    ll n;
    cin >> n;
    ll len = 2 * n;
    ll c = 0;
    For(i, 1, len)
    {
        if (i <= n)
        {
            c += i;
        }
        else
        {
            c += (len - i);
        }
        num[i] = c % 10;
        c /= 10;
    }
    if (c)
    {
        cout << c;
    }
    else
    {
        Forr(i, len - 1, 1)
        {
            cout << num[i];
        }
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
