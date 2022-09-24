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

void solve()
{
    ll n, sum;
    cin >> n >> sum;
    if (n == sum)
    {
        cout << 1 << endl;
        return;
    }
    if (n < sum)
    {
        cout << 0 << endl;
        return;
    }
    vec a(n);
    For(i, 0, n)
    {
        a[i] = i + 1;
    }
    ll count = 0;
    For(i, 0, n)
    {
        For(j, 0, n)
        {
            if (binary_search(a.begin(), a.end(), sum - a[i] - a[j]))
            {
                count++;
            }
        }
    }
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
