#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int l,r,k;
        cin >>l>>r>>k;
        int n = max(0, r / k - l + 1);
        cout<< n << "\n";
    }
    return 0;
}