#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clear() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
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

void solve()
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