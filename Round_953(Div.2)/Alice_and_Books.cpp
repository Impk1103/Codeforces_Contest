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
        int book[n];
        for(int i=0;i<n;i++){
            cin>>book[i];
        }
        sort(book[0],book[n-1]);

        int max=book[n-1]+ book[n-2];
        cout<< max<< endl;
    }

    return 0;
}
