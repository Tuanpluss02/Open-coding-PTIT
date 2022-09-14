#include <bits/stdc++.h>
using namespace std;
int n, t;
long double x;
long double Pow(long double x, int n)
{
    long double ans = 1;
    while (n--)
        ans *= x;
    return ans;
}
double calc(int n)
{
    if (n == 1)
        return sqrt(x);
    return sqrt(Pow(x, n) + calc(n - 1));
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cout << fixed << setprecision(3) << calc(n) << '\n';
    }
}