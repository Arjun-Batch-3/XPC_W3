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
        cin.ignore();

        string s;
        getline(cin, s);



        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'm' || s[i] == 'e' || s[i] == 'o' || s[i] == 'w') {
                s[i] = s[i] - 32;
            }
        }

        vector<char>v{'M','E','O','W'};
      int f=0,j=0,mp=0,c1=0;
   for (int i = 0; i < s.size(); i++,mp++) {

          if(s[i]==v[j])
          {

            continue;
          }
          else if(s[i]!=v[j]&&s[0]==v[0])
          {

              j++;
              if(j==v.size()){f=1;break;}
              if(s[i]==v[j])continue;
            else
          {
              f=1;
              break;
          }
          }
          else{f=1;break;}

        }


        if (f==0&&j==v.size()-1) {

                   cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
