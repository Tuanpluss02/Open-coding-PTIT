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

class matrix
{
public:
    ll arr[11][11];
    ll len;
    matrix()
    {
        For(i, 0, 11)
        {
            For(j, 0, 11)
            {
                arr[i][j] = 1;
            }
        }
    }
    matrix operator*(matrix b)
    {
        matrix tmp = *this;
        matrix c;
        c.len = len;
        For(i, 0, len)
        {

            For(j, 0, len)
            {
                For(k, 0, len)
                {
                    c.arr[i][j] = tmp.arr[i][k] * b.arr[k][j];
                    c.arr[i][j] %= Mod;
                }
            }
        }
        return c;
    }
    matrix power(ll n)
    {
        if (n == 1)
            return *this;
        matrix tmp = power(n / 2);
        if (n % 2 == 0)
            return tmp * tmp;
        return tmp * tmp * (*this);
    }
};

void solve()
{
    ll x, y;
    cin >> x >> y;
    matrix res;
    For(i, 0, x)
    {
        For(j, 0, x)
        {
            cin >> res.arr[i][j];
        }
    }
    res.len = x;
    res = res.power(y);
    For(i, 0, x)
    {
        For(j, 0, x)
        {
            cout << res.arr[i][j] << " ";
        }
        cout << endl;
    }
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
