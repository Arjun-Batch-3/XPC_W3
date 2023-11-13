#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int chefWins = 0;
        int chefinaWins = 0;

        for (int i = 0; i < N; i++) {
            char chefMove = A[i];
            char chefinaMove = B[i];

            if ((chefMove == 'R' && chefinaMove == 'S') ||
                (chefMove == 'S' && chefinaMove == 'P') ||
                (chefMove == 'P' && chefinaMove == 'R')) {
                chefWins++;
            } else if ((chefinaMove == 'R' && chefMove == 'S') ||
                       (chefinaMove == 'S' && chefMove == 'P') ||
                       (chefinaMove == 'P' && chefMove == 'R')) {
                chefinaWins++;
            }
        }

        int minRounds = max(chefWins, chefinaWins);
        cout << minRounds << endl;
    }

    return 0;
}






