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

const ll arr[18] = {
    0, 49, 100, 1444, 10000, 144400, 1000000, 11909401, 100000000, 1190940100, 10000000000, 100940914944, 1000000000000, 10094091494400, 100000000000000, 1001199014109441, 10000000000000000, 100004441141404944};

void solve()
{
    ll n;
    cin >> n;
    if (n > 18 || n < 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << arr[n - 1] << "  ";
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
        if (test)
            cout << endl;
    }
    // pause();
    return 0;
}
