#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max = 0;
        for (int i = 0; i < n-1; i++) {
            if(arr[i]>max){
                max=arr[i];
            }
        }
 
        cout << max+arr[n-1]<<endl;
    }
 
    return 0;
}