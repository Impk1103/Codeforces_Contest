#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int x = 0, y = 0;
        bool m = false;

        for (int i = 0; i < 100 * n; ++i) {
            if (x == a && y == b) {
                m = true;
                break;
            }

            char c = s[i % n];
            if (c == 'N') y++;
            else if (c == 'E') x++;
            else if (c == 'S') y--;
            else if (c == 'W') x--;
        }

        if (m) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}