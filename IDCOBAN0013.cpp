#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define N 100000000
#define mod 100000007

ll count(ll l, ll r)
{
    return (floor(sqrt(r)) - ceil(sqrt(l)) + 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << count(l, r) << endl;
    }
}