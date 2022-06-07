#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main() {
    int n; cin >> n;
    vector< int > v(n);
    for(int i =0; i < n; i++) {
        cin >> v[i];
    }
    int lastGCD = v[0];
    for(int i = 1; i < n ; i++) {
        int gcd = __gcd(v[i],lastGCD);
        lastGCD = gcd;
    }
    cout<< lastGCD * n;
    return 0;
}