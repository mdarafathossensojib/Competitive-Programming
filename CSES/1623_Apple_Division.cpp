#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];

    ll total = accumulate(a.begin(), a.end(), 0LL);
    ll ans = LLONG_MAX;

    for(int mask = 0; mask < (1 << n); ++mask){
        ll sum = 0;
        for(int i = 0; i < n; ++i){
            if(mask & (1 << i)){
                sum += a[i];
            }
        }
        
        ll diff = abs((sum*2) - total);
        ans = min(ans, diff);
    }
    cout << ans << endl;

    return 0;
}
