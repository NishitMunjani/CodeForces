#include <bits/stdc++.h>
#define int long long
using pii=std::pair<int,int>;
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int cases = 0; cases < t; cases++) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pii> order;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            order.push_back({b[i], a[i]});
            ans += abs(a[i] - b[i]);
        }
        sort(order.begin(), order.end());
        int extra = 0, min_upper = 1'000'000'000;
        for(int i = 0; i < n; i++) {
            int cur_lower = min(order[i].first, order[i].second);
            extra = max(extra, 2 * (cur_lower - min_upper));
            min_upper = min(min_upper, max(order[i].first, order[i].second));
        }
        cout << ans + extra << "\n";
    }
} 