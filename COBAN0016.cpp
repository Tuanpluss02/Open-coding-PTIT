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

lli power(lli a, lli b)
{
    lli res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % Mod;
        a = (a * a) % Mod;
        b >>= 1;
    }
    return res;
}

void solve()
{
    // string a, b;
    // cin >> a >> b;
    // ll A = 0, B = 0;
    // for (char c : a)
    //     (A = A * 10 + c - '0') % Mod;
    // for (char c : b)
    //     (B = B * 10 + c - '0') % (Mod - 1);
    // ll ans = 1;
    // for (; B; A = A * A % Mod, B /= 2)
    //     if (B & 1)
    //         (ans *= A) %= Mod;
    // cout << ans;
    lli a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    clear();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
