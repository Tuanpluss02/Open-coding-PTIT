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

double Dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void solve()
{
    ll n;
    double x, y;
    cin >> n;
    vector<pair<double, double>> v(n);
    For(i, 0, n)
    {
        cin >> x >> y;
        v[i] = {x, y};
    }
    For(i, 0, n)
    {
        For(j, 0, n)
        {
            cout << fixed << setprecision(2) << Dist(v[i].fi, v[i].se, v[j].fi, v[j].se);
            if (j != n - 1)
            {
                cout << " ";
            }
        }
        if (i != n - 1)
            cout << endl;
    }
    // thay cho qua test nay ao qua :v
}

int main()
{
    freopen("points.inp", "r", stdin);
    freopen("points.out", "w", stdout);
    int test = 1;
    // cin >> test;
    // clear();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
