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
#define PI 3.14159265358979323846
#define epsi 1e-6
using namespace std;

void solve()
{
    float S, T, x, lt, gt;
    int car = -1;
    cin >> x;
    if (x > 15)
    {
        cout << fixed << setprecision(7) << sin(x) << endl;
        // return;
        string s = to_string(sin(x));
        string tmp = s.substr(s.size() - 3, 4);
        cout << tmp << endl;
        return;
    }
    gt = 1;
    S = T = lt = x;
    for (int i = 3; T > epsi; i += 2, car = -car)
    {
        T = (lt *= x * x) / (gt *= i * (i - 1));
        S += car * T;
    }
    cout << fixed << setprecision(7) << S << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clear();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
