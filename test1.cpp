#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll prime[1000];

void atkin()
{
    for (int i = 0; i < 1000; i++)
        prime[i] = 0;
    prime[2] = 1;
    prime[3] = 1;
    for (int x = 1; x * x < 1000; x++)
    {
        for (int y = 1; y * y < 1000; y++)
        {
            int n = (4 * x * x) + (y * y);
            if (n <= 1000 && (n % 12 == 1 || n % 12 == 5))
                prime[n] ^= 1;
            n = (3 * x * x) + (y * y);
            if (n <= 1000 && n % 12 == 7)
                prime[n] ^= 1;
            n = (3 * x * x) - (y * y);
            if (x > y && n <= 1000 && n % 12 == 11)
                prime[n] ^= 1;
        }
    }
    for (int r = 5; r * r < 1000; r++)
    {
        if (prime[r])
        {
            for (int i = r * r; i < 1000; i += r * r)
                prime[i] = 0;
        }
    }
}

bool check(ll n)
{
    string s = to_string(n);
    for (char i : s)
    {
        if (i != '2' && i != '3' && i != '5' && i != '7')
            return false;
    }
    return true;
}
void solve()
{
    atkin();
    for (int i = 1; i <= 100; i++)
    {
        cout << prime[i] << " ";
    }
}

int main()
{
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
