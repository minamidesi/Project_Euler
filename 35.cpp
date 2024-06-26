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

ll getNextNumber(ll n)
{
    ll dig = 0, tmp = n;
    while(tmp)
    {
        tmp /= 10;
        dig++;
    }

    ll lead_num = n % 10 * pow(10, dig);
    return (lead_num + n) / 10;
}

bool check(ll n)
{
    ll cur = n;
    do
    {
        if(!isprime(cur))
        {
            return false;
        }
        cur = getNextNumber(cur);

    } while (cur != n);

    return true;
}

void solve()
{
    ll res = 0;
    for (int i = 2; i <= 1e6; i++)
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