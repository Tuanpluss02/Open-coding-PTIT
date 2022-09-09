// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// const ll arr[9] = {9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000};

// ll check(int n)
// {
//     ll res = 0;
//     string s(n - 1, '0'), tmp1, tmp2;
//     s = "1" + s;
//     ll mn = stoll(s);
//     s += "0";
//     ll mx = stoll(s);
//     for (ll i = mn; i < mx; i++)
//     {
//         tmp1 = to_string(i);
//         tmp2 = tmp1;
//         reverse(tmp2.begin(), tmp2.end());
//         if (tmp1 == tmp2)
//         {
//             res++;
//         }
//     }
//     return res;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << check(n) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll arr[9] = {9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n;
        string s(n, 1);
        int x = s.size();
        if (x & 1)
        {
            x -= 1;
            a = x / 2;
        }
        else
        {
            x -= 2;
            a = x / 2;
        }
        ll res = 9 * pow(10, a);
        cout << res << endl;
    }
}
