#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n, q, curr = 0;
        cin >> n >> q;
        vector<ll> a(n+1), pre(n+1), v;
        for(int i=1; i<=n; ++i){
            cin >> a[i];
            pre[i] = pre[i-1] + a[i];
            curr = max(curr, a[i]);
            v.push_back(curr);
        } 
        
        while(q--){
            ll x;
            cin >> x;

            auto it = upper_bound(v.begin(), v.end(), x) - v.begin();

            cout << pre[it] << " ";
        }
        cout << endl;
    }

    return 0;
}
