#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
 
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n,m;
        cin >> n >> m;
        cout<< lcm(n,m)<<endl;
    }
 
    return 0;
}