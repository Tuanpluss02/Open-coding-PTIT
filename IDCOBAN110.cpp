#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long
#define For(i, a, b) for (lli i = a; i < b; ++i)
#define Forr(i, a, b) for (lli i = a; i >= b; --i)
#define vec vector<lli>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

const lli prime[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
lli n, res;
void pro(lli i, lli num, lli div)
{
    if (div > n)
        return;
    if (div == n)
        res = min(res, num);
    For(j, 1, 1e18)
    {
        if (num * prime[i] > res)
            break;
        num *= prime[i];
        pro(i + 1, num, div * (j + 1));
    }
}

void solve()
{
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    res = 1e18;
    pro(0, 1, 1);
    cout << res << endl;
}
int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
