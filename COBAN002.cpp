#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int arr[4] = {0, 1, 4, 9};
int n;
bool found = false;

void rec(ll cur, ll num)
{
    if (num == 0)
    {
        string s = to_string(cur);
        if (s.size() == n)
        {
            ll k = sqrt(cur);
            if (k * k == cur)
            {
                cout << cur << endl;
                found = true;
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (found)
                return;
            rec(cur * 10 + arr[i], num - 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n & 1)
        {
            string s(n - 1, '0');
            s = "1" + s;
            ll x = stoll(s);
            cout << x << endl;
        }
        else
            rec(0, n);
        found = false;
    }
}