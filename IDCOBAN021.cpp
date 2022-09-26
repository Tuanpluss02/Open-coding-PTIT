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
ll arr[1000000];

bool check(ll n)
{
    string s = to_string(n);
    ll l = s.length();
    if (l & 1)
        return false;
    ll x = 0, y = 0;
    for (auto i : s)
    {
        if (i - '0' == b)
            x++;
        else
            y++;
    }
    if (x == y)
        return true;
    return false;
}

ll gen(ll arr[], ll n)
{
    do
    {
        ll sum = 0;
        For(i, 0, n)
        {
            sum = sum * 10 + arr[i];
        }
        // cout << sum << endl;
        if (sum >= a && check(sum))
            return sum;
    } while (next_permutation(arr, arr + n));

    arr[len] = b;
    arr[len + 1] = c;
    len += 2;
    sort(arr, arr + len);
    return gen(arr, len);
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
            arr[i] = b;
        else
            arr[i] = c;
    sort(arr, arr + len);
    cout << gen(arr, len) << endl;
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
