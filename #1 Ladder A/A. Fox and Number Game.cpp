#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main() {
    int n; cin >> n;
    int mn = 1;
    vector< int > v(n);
    for(int i =0; i < n; i++) {
        cin >> v[i];
        mn = max(v[i],mn);
    }
    for(int i = 1; i < n ; i++) {
        if(v[i] == v[i-1]) continue;
        mn = min(mn,abs(v[i]-v[i-1]));
    }
    while(true) {
        bool AllSame = true;
        sort(v.begin(),v.end());
        for(int i = 0; i < n; i++) {
            while(v[i] > mn) v[i] -= mn;
            if(mn != v[i]) {
              mn = min(mn, abs(mn - v[i]) );
            }
            if(i && v[i] != v[i-1]) AllSame = false;
        }
        if(AllSame || mn == 1) break;
    }
    cout<< 1LL * (mn * n);
    return 0;
}