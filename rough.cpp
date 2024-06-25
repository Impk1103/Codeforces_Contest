#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int _;
    cin>>_;
    while(_--){
        int n,m;
        string c;
        cin>>n>>m>>c;
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[c[i]]=0;
        }
        cout<<map["A"]<<endl;
    }
    return 0;
}