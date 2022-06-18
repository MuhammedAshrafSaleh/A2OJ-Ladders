
#include <bits/stdc++.h>
#define LL long long
using namespace std;
bool check(int n) {
    if(n < 0) n *= -1;
    while(n > 1) {
        int d = n%10;
        if(d == 8) return true;
        n /= 10;
    }
    return false;
}
int main() {
    int n; cin >> n;
    if(n == -8) return cout << 16, 0;
    for(int i =1; i <= 20; i++) {
        n++;
        if(check(n)) return cout << i,0;
    }
    return 0;
}