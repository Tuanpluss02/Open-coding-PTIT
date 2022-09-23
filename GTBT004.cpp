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

int n, t;
float x;

float Pow(float x, int n)
{
    float ans = 1;
    while (n--)
        ans *= x;
    return ans;
}
float calc(int n)
{
    if (n == 1)
        return sqrt(x);
    return sqrt(Pow(x, n) + calc(n - 1));
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cout << fixed << setprecision(3) << calc(n) << '\n';
    }
}