#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long x,y,k;
        cin >>x>>y>>k;
        while(k-->0){
            x+=1;
            while(x%y==0){
                x=x/y;
            }
        }
        cout<< x<< endl;
    }
 
    return 0;
}