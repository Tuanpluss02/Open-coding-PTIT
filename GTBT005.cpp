#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>

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
#define epsi 1e-5
using namespace std;

float degree[100];
vector<float> v;
void init()
{
    float tmp = 0;
    For(x, 0, 100)
    {
        if (x > 6)
        {
            int i = 0;
            while (tmp < x)
            {
                i += 2;
                tmp = i * PI;
            }
            tmp = (i - 2) * PI;
        }
        v.pb(round((x - tmp) * 100) / 100);
    }
}
void solve()
{
    float S, T, n, lt, gt;
    int car = -1;
    cin >> n;
    float x = v[n];
    gt = 1;
    S = T = lt = x;
    for (int i = 3; T > epsi; i += 2, car = -car)
    {
        T = (lt *= x * x) / (gt *= i * (i - 1));
        S += car * T;
    }
    cout << endl;
    cout << fixed << setprecision(2) << "Cong thuc Taylor: sin (" << x << ") = " << fixed << setprecision(4) << S << endl;
    cout << fixed << setprecision(2) << "Sin () cua math.h: sin(" << x << ") = " << fixed << setprecision(4) << sin(x) << endl;
    cout << "S= " << fixed << setprecision(6) << S << endl;
}

int main()
{
    faster();
    init();
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
