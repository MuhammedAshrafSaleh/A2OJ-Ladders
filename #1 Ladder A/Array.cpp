#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    deque < int > vp, vn, vz;
    int p1= 1, p2= 1; 
    for(int i =0; i < n; i++) {
        int x; cin >> x;
        if(x > 0 ) vp.push_back(x);
        else if (x < 0) vn.push_back(x);
        else vz.push_back(x);
    }
    if(vp.size() == 0) {
        vp.push_back(vn.front());
        vn.pop_front();
        vp.push_back(vn.front());
        vn.pop_front();
    }
    if((vn.size() & 1) == 0) {
        vz.push_back(vn.front());
        vn.pop_front();
    }
    cout << vn.size();
    for(auto it : vn) cout <<" " << it;
    cout << "\n";
    cout << vp.size();
    for(auto it : vp) cout <<" " << it;
    cout << "\n";
    cout << vz.size();
    for(auto it : vz) cout <<" " << it;
    return 0;
}