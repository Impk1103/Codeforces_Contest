#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    int no;
    cin>> no;
    int pr;
    cin>> pr;
    int hi;
    cin>>hi;
    int profit=0;
    if(hi-pr>=0)
    {
        while(no--)
        {
            profit+=hi;
            hi--;
            if(hi==pr)
            {profit+=no*pr;
            break;
        }
    }
    }
    else{
        profit=no*pr;

    }

cout<<profit;

    }
 return 0;
}