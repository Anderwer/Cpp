#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int mn = min(x, y);
    cout << "0 0 " << mn << " " << mn << "\n";
    cout << mn << " 0 0 " << mn << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}