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
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
bool vis[1000005];
int arr[1000005];
void solve()
{
    ll n, k;
    cin >> n >> k;
    memset(vis, false, sizeof(vis));
    if (k == 0)
    {
        For(i, 1, n + 1) cout << i << " ";
        cout << endl;
        return;
    }
    For(i, 1, n + 1)
    {
        arr[i] = i;
    }
    int i = 1;
    while (true)
    {
        if (vis[i] == false && i + k <= n)
        {
            swap(arr[i], arr[i + k]);
            vis[i] = vis[i + k] = true;
        }
        else
        {
            if (vis[i])
                i++;
            else
                break;
        }
    }
    if (count(vis + 1, vis + n + 1, false))
    {
        cout << -1 << endl;
    }
    else
    {
        For(i, 1, n + 1) cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}
