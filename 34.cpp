#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll fac[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

bool check(ll n)
{
    ll tmp = n, sum = 0;
    while(tmp)
    {
        sum += fac[tmp % 10];
        tmp /= 10;
    }

    return sum == n;
}

void solve()
{
    ll res = 0;
    for (int i = 3; i < 2000000; i++)
    {
        if(check(i))
            res += i;
    }

    cout << "ans is : " << res << '\n';
}

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}