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
#define lli unsigned long long int
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
int a[20][20];
ll res;
int n, k;

void back(int x, int y)
{
    if (x > n || y > n || x < 1 || y < 1)
    {
        k++;
        return;
    }
    if (k == 0)
    {
        return;
    }
    if (a[x][y] == 1)
    {
        k++;
        return;
    }
    a[x][y] = 1;
    if (x + 1 <= n && y + 2 <= n && a[x + 1][y + 2] == 0)
    {
        res++;
    }
    if (x + 2 <= n && y + 1 <= n && a[x + 2][y + 1] == 0)
    {
        res++;
    }
    if (x + 2 <= n && y - 1 >= 1 && a[x + 2][y - 1] == 0)
    {
        res++;
    }
    if (x + 1 <= n && y - 2 >= 1 && a[x + 1][y - 2] == 0)
    {
        res++;
    }
    if (x - 1 >= 1 && y - 2 >= 1 && a[x - 1][y - 2] == 0)
    {
        res++;
    }
    if (x - 2 >= 1 && y - 1 >= 1 && a[x - 2][y - 1] == 0)
    {
        res++;
    }
    if (x - 2 >= 1 && y + 1 <= n && a[x - 2][y + 1] == 0)
    {
        res++;
    }
    if (x - 1 >= 1 && y + 2 <= n && a[x - 1][y + 2] == 0)
    {
        res++;
    }
    k--;
    back(x + 1, y + 2);
    back(x + 2, y + 1);
    back(x + 2, y - 1);
    back(x + 1, y - 2);
    back(x - 1, y - 2);
    back(x - 2, y - 1);
    back(x - 2, y + 1);
    back(x - 1, y + 2);
}

void reset()
{
    For(i, 1, n + 1)
    {
        For(j, 1, n + 1)
        {
            a[i][j] = 0;
        }
    }
    res = 1;
}

void solve()
{
    cin >> n >> k;
    int x, y;
    cin >> x >> y;
    reset();
    // res = 1;
    back(x, y);
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
