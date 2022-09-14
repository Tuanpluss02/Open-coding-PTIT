#include <bits/stdc++.h>
using namespace std;
#define ll long long

// long double dist(double x1, double y1, double x2, double y2)
// {
//     return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
// }

int main()
{
    // freopen("points.inp", "r", stdin);
    // freopen("points.out", "w", stdout);
    ll n;
    double x, y;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        v[i] = {x, y};
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << fixed << setprecision(2) << hypot(v[i].first - v[j].first, v[i].second - v[j].second) << " ";
        }
        cout << endl;
    }
    return 0;
}