#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll n;
ll fac[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
vector<ll> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void solve()
{
    // 0123456789 has began as first sequence
    ll ind = 1000000 - 1;
    vector<ll> res;

    string s;

    // from highest to lowest digital
    for (int i = 9; i >= 0; i--)
    {
        ll dig = i;

        ll cnt = 0;
        while (ind >= cnt * fac[dig])
            cnt++;
        cnt--;

        s += to_string(a[cnt]);

        cout << "num = " << a[cnt] << ", ";
        a.erase(a.begin() + cnt);

        ind -= (cnt)*fac[dig];
        cout << "left = " << ind << '\n';
    }

    cout << "ans is : " << s << '\n';
}

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}