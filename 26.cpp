#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll getnum(ll n)
{
    vector<ll> a;

    ll left = 1;
    bool flag = true;

    while (flag)
    {
        if (left < n)
            left *= 10;
        if (find(a.begin(), a.end(), left % n) != a.end())
            flag = false;

        if (flag)
            a.push_back(left % n);
        left = left % n;
    }

    cout << "a: ";
    for (auto it : a)
        cout << it;
    cout << '\n';

    return a.size();
}

void solve()
{
    ll ind = -1, mx = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (getnum(i) >= mx)
        {
            mx = getnum(i);
            ind = i;
        }
    }

    cout << "ans is : " << ind << '\n';
}

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}