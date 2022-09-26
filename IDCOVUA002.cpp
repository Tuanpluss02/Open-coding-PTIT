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
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

int n;
vector<int> x;
vector<bool> c1;
vector<bool> c2;
vector<bool> c;
ll res = 0;

bool check(int i, int j)
{
    if (c[j] == false || c1[i - j + n - 1] == false || c2[i + j - 2] == false)
        return false;
    return true;
}

void queen(int i)
{
    for (int j = 1; j <= n; j++)
        if (check(i, j))
        {
            x[i] = j;
            c[j] = c1[i - j + n - 1] = c2[i + j - 2] = false;
            if (i == n)
                res++;
            else
                queen(i + 1);
            c[j] = c1[i - j + n - 1] = c2[i + j - 2] = true;
        }
}

void solve()
{
    cin >> n;
    x.resize(n + 1);
    c.resize(n + 1, true);
    c1.resize(2 * n - 1, true);
    c2.resize(2 * n - 1, true);
    queen(1);
    cout << res << endl;
    res = 0;
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
