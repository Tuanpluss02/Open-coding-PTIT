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
string mul(string s1, string s2)
{
    string res = "";
    int n = s1.size();
    int m = s2.size();
    res.assign(m + n, '0');
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mul = (s1[i] - '0') * (s2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + (res[p2] - '0');
            res[p2] = sum % 10 + '0';
            res[p1] += sum / 10;
        }
    }
    while (res[0] == '0' && res.length() > 1)
    {
        res.erase(0, 1);
    }
    return res;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string res = "1";
    For(i, n - k + 1, n + 1)
    {
        res = mul(res, to_string(i));
    }
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
/*
6! = 1 2 3 4 5  6
(6-2)! = 1 2 3 4
5 6
*/