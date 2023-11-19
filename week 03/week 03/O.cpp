#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 1;

        for (int i = 2; i < n; i++) {
            if (s[i - 2] != s[i]) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}





