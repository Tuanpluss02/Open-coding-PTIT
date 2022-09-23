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
using namespace std;

ll factorial(ll n)
{
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

float sinn(float x)
{
    int k = 1;
    float kq, tg;
    kq = tg = x;

    while (kq += tg *= -x * x / (2 * k) / (2 * k++ + 1), fabs(tg) > 0.00001)
        ;
    return kq;
}

void solve()
{
    float n;
    cin >> n;
    // if (n > 20)
    // {
    //     n = n * PI / 180;
    // }
    cout << fixed << setprecision(6) << sinn(n) << endl;
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
