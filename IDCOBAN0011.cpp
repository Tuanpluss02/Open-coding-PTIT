#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define N 100000000
#define mod 100000007

string decToBin(ll n)
{
    string res = "";
    while (n >= 1)
    {
        res += to_string(n % 2);
        n >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << decToBin(n);
        if (t)
            cout << " " << endl;
    }
}