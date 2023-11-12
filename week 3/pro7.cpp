#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        int pre[n]; // Change array size to n
        int z[n - 1]; // Add z array
        for (int i = 0; i < n; i++) {
            pre[i] = 0;
        }

        for (int i = 0; i < n - 1; i++) {
            z[i] = 0;
        }

        int p = 0;
        while (pre[n - 1] != r) {
            if (p == n) {
                p = 0;
            }
            for (int l = 1; l < n; l++) {
                pre[l] = pre[l] + pre[l - 1];
            }
            pre[p]++;
            z[p]++;
            p++;
        }

        cout << s - r << " " << pre[n - 1] << " klshfn ";
    }
    return 0;
}

