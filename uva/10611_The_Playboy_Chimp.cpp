#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        auto left = lower_bound(a.begin(), a.end(), v);
        if(left == a.begin()){
            cout << "X ";
        }
        else{
            left--;
            cout << *left << " ";
        }
        
        auto right = upper_bound(a.begin(), a.end(), v);
        if(right == a.end()){
            cout << "X\n";
        }
        else{
            cout << *right << endl;
        }
    }
    return 0;
}
