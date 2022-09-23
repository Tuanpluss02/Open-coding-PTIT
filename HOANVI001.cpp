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
void print(vec &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

void per(vec &a, ll k)
{
    if (k == 1)
    {
        print(a);
        return;
    }
    for (int i = 0; i < k - 1; i++)
    {
        per(a, k - 1);
        if (k % 2 == 0)
            swap(a[i], a[k - 1]);
        else
            swap(a[0], a[k - 1]);
    }
    per(a, k - 1);
}

void solve()
{
    int n;
    cin >> n;
    vec v(n);
    For(i, 1, n + 1)
    {
        v[i - 1] = i;
    }
    per(v, n);
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
