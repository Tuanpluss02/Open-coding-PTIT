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

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        string str;
        getline(cin, str);
        string s = "";
        for (auto i : str)
        {
            if (i == ':' || isdigit(i) || i == '?')
            {
                s += i;
            }
        }

        if (s[0] == '?')
        {
            if ((s[1] <= '3' && s[1] >= '0') || s[1] == '?')
            {

                s[0] = '2';
            }
            else if (s[1] >= '4' && s[1] <= '9')
            {
                s[0] = '1';
            }
        }
        if (s[1] == '?')
        {
            if (s[0] == '2')
                s[1] = '3';
            else
                s[1] = '9';
        }
        if (s[3] == '?')
            s[3] = '5';
        if (s[4] == '?')
            s[4] = '9';
        cout << "\"" << s << "\"" << endl;
    }
}
