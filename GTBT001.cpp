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

int process(int n)
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
            res += pow(x, i) / process(i);
        }
        cout << fixed << setprecision(3) << res << endl;
    }
    return 0;
}