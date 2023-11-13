#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> permutation(N);

        // Create the initial permutation from 1 to N
        for (int i = 0; i < N; i++) {
            permutation[i] = i + 1;
        }

        // Swap adjacent elements to satisfy the given conditions
        for (int i = 1; i < N; i += 2) {
            swap(permutation[i], permutation[i - 1]);
        }

        // Output the permutation
        for (int i = 0; i < N; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}



