#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
        {
        string s;
        getline(cin, s);

        string s1="Yes";
        for(int i=0;i<200;i++)
        {
            s1=s1+"Yes";
        }
        int f=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1.substr(i,s.size())==s)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}

    }

    return 0;
}




//esY, YesYes, sYes, e,
