#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k = 1;
    while(true){
        int n, q;
        cin >> n >> q;
        if(n == 0 && q == 0) break;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        cout << "CASE# " << k++ << ":" << endl;
        while(q--){
            int x;
            cin >> x;

            auto it = lower_bound(a.begin(), a.end(), x);
            if(it != a.end() && *it == x){
                int pos = it - a.begin();
                cout << x << " found at " << pos + 1 << endl;
            } 
            else{
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}
