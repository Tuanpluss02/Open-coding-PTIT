#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        float x;
        cin >> n >> x;
        float res = 0;
        for (int i = 1; i <= n; i++)
        {
            res += pow(x, i) / sum(i);
        }
        cout << fixed << setprecision(3) << res << endl;
    }
    return 0;
}