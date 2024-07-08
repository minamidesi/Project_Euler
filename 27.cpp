#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


bool isprime(ll num)
{
    if(num<=0 || num==1 || num==4)
        return false;
    if(num==2 || num==3)
        return true;
    if(num%6==0 || num%6==2 || num%6==3 || num%6==4)
        return false;
    for (ll i = 5; i*i<=num; i+=6)
        if(num%i == 0) return false;
    for (ll i = 7; i*i<=num; i+=6)
        if(num%i == 0) return false;
    return true;
}

void solve()
{
    ll res = 0, mx = 0;
    for (int a = -999; a <= 999; a++)
    {
        for (int b = -1000; b <= 1000; b++)
        {
            ll cnt = 0;
            ll n = -1;
            while(isprime((n+1) * (n+1) + a * (n+1) + b))
            {
                cnt++;
                n++;
            }

            if(cnt > mx)
            {
                mx = cnt;
                res = a * b;
            }

        }
    }

    cout << "ans = " << res << '\n';
}

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}