#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define N 100000000
bitset<N> bits;

int primes[N];
void precomputation()
{
    for (int i = 2; i < N; i += 2)
        primes[i] = 2;
    int sq = sqrt(N - 1);
    for (int i = 3; i < N; i += 2)
        if (!bits[i])
        {
            primes[i] = i;
            if (i <= sq)
                for (int j = i * i; j < N; j += 2 * i)
                    if (!bits[j])
                    {
                        primes[j] = i;
                        bits[j] = 1;
                    }
        }
}

bool ckeck(ll n)
{
    if (n < N)
        return primes[n] == n;
    int sq = sqrt(n);
    for (int i = 2; i <= sq; i++)
        if (n % i == 0)
            return true;
    return true;
}

// bool check(ll n)
// {
//     ll test = n;
//     ll res = 1;
//     map<ll, ll> m;
//     while (!(n & 1))
//     {
//         m[2]++;
//         n >>= 1;
//     }
//     while (n % 3 == 0)
//     {
//         m[3]++;
//         n /= 3;
//     }
//     for (int i = 5; i * i <= n; i += 6)
//     {
//         while (n % i == 0)
//         {
//             m[i]++;
//             n /= i;
//         }
//         while (n % (i + 2) == 0)
//         {
//             m[i + 2]++;
//             n /= (i + 2);
//         }
//     }
//     if (n > 1)
//         m[n]++;
//     for (auto i : m)
//     {
//         res *= i.first;
//     }
//     // cout << res << endl;
//     return res < test;
// }

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
