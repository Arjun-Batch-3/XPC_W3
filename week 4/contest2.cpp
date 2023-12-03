#include<bits/stdc++.h>
using namespace std;

bool xx(vector<bool>& v, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (!v[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<bool> isA(n, false);

        int operations = 0;
        while (true) {
            bool found = false;  // Flag to check if any operation is performed in this iteration
            for (int i = 0; i < n - 1; ++i) {
                if (s[i] == 'A' && !isA[i] && s[i + 1] == 'B') {
                    ++operations;
                    swap(s[i], s[i + 1]);
                    isA[i] = true;
                    found = true;
                }
            }
            if (!found) {
                break;  // No operation is performed in this iteration, exit the loop
            }
        }

        cout << operations << endl;
    }

    return 0;
}

