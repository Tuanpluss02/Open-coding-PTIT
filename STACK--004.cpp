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
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

void solve()
{

    string tmp;
    getline(cin, tmp);
    string s = "";
    for (auto i : tmp)
    {
        if (i != ' ')
        {
            s += i;
        }
    }
    stack<char> st;
    string res = "";
    For(i, 0, s.length())
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            while (!st.empty() && st.top() != '(' && st.top() != '+' && st.top() != '-' && st.top() != '*' && st.top() != '/')
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
        {
            res += s[i];
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
