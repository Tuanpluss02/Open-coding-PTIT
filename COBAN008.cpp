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

string add(string s1, string s2)
{
    int carry = 0;
    string res = "";
    for (int i = s1.length() - 1, j = s2.length() - 1; i >= 0 || j >= 0; i--, j--)
    {
        int a = (i >= 0) ? s1[i] - '0' : 0;
        int b = (j >= 0) ? s2[j] - '0' : 0;
        int sum = a + b + carry;
        if (sum >= 10)
        {
            sum = sum % 10;
            carry = 1;
        }
        else
            carry = 0;
        res = to_string(sum) + res;
    }
    if (carry == 1)
        res = "1" + res;
    return res;
}

int main()
{
    int t;
    cin >> t;
    clear();
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << add(s1, s2) << endl;
    }
}