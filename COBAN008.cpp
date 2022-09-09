#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << add(s1, s2) << endl;
    }
}