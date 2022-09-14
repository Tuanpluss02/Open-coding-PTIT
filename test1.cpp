#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        long long A = 0, B = 0;
        for (char c : a)
            (A = A * 10 + c - '0') % MOD;
        for (char c : b)
            (B = B * 10 + c - '0') % (MOD - 1);
        long long ans = 1;
        for (; B; A = A * A % MOD, B /= 2)
            if (B & 1)
                (ans *= A) %= MOD;
        cout << ans << '\n';
    }
}