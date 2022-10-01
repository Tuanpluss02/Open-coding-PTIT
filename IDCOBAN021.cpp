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
ll a, b, c, len;
string res;

string next_per(string s)
{
    int i = s.size() - 1;
    while (i > 0 && s[i - 1] >= s[i])
        i--;
    if (i <= 0)
        return "0";
    int j = s.size() - 1;
    while (s[j] <= s[i - 1])
        j--;
    swap(s[i - 1], s[j]);
    j = s.size() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

ll gen(string s, ll n)
{
    ll sum = 0;
    // cout << s << endl;
    for (auto i : s)
    {
        sum = sum * 10 + i - '0';
    }
    if (sum >= a)
        return sum;
    string tmp = next_per(s);
    if (tmp == "0")
    {
        s.pb(b + '0');
        s.pb(c + '0');
        len += 2;
        sortu(s);
    }
    return gen(next_per(s), n);
}

void solve()
{

    cin >> a >> b >> c;
    string s = to_string(a);
    len = s.length();
    if (len & 1)
        len++;
    for (int i = 0; i < len; i++)
        if (i < len / 2)
            res.pb(b + '0');
        else
            res.pb(c + '0');
    sortu(res);
    // cout << res << endl;
    cout << gen(res, a) << endl;
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
