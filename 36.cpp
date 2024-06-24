#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll check(ll n)
{
    string s;
    ll tmp = n;

    // base 10
    while(tmp)
    {
        s += to_string(tmp % 10);
        tmp /= 10;
    }
    for (int i = 0; i < s.length() - 1 - i; i++)
    {
        if(s[i] != s[s.length() - 1 - i])
            return 0;
    }

    s.clear();
    tmp = n;

    // base 2
    while(tmp)
    {
        s += to_string(tmp % 2);
        tmp >>= 1;
    }
    for (int i = 0; i < s.length() - 1 - i; i++)
    {
        if(s[i] != s[s.length() - 1 - i])
            return 0;
    }

    return n;
}

void solve()
{
    ll res = 0;
    for (int i = 1; i <= 1e6; i++)
    {
        res += check(i);
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