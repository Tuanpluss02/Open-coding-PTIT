#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        double x;
        cin >> n >> x;
        long double res = 0;
        for (int i = 1; i <= n; i++)
        {
            res += pow(x, i) / sum(i);
        }
        cout << fixed << setprecision(3) << res << endl;
    }
}