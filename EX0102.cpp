#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
