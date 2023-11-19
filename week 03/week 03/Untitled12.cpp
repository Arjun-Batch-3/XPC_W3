#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        string s;
        getline(cin, s);

        set<char> uniqueChars;
        string st = "";

        for (char c : s) {
            char upperCaseChar = toupper(c);  // Convert to uppercase
            if (upperCaseChar == 'M' || upperCaseChar == 'E' || upperCaseChar == 'O' || upperCaseChar == 'W') {
                if (uniqueChars.find(upperCaseChar) == uniqueChars.end()) {
                    uniqueChars.insert(upperCaseChar);
                    st.push_back(upperCaseChar);
                }
            }
        }

        // Check if the unique characters form the pattern "MEOW"
        if (st == "MEOW") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


