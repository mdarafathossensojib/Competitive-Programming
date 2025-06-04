#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll isPair(ll n, vector<ll> arr, ll k){
    ll cnt = 0;
    ll l = 0, r = n - 1;

    while(l < r){
        while(l < r && arr[l] + arr[r] > k) r--;

        cnt += (r - l);
        l++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for(int i=0; i<n; ++i) cin >> a[i];
        sort(a.begin(), a.end());

        ll ans = isPair(n, a, r) - isPair(n, a, l-1);
        cout << ans << endl;
    }
    return 0;
}
