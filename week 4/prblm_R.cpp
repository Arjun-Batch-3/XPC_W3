#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;


       // queue<int> q1 = v;
map<char, bool>q;
for(int i=0;i<s.size();i++)
{
    q[s[i]]=false;
}
int c1=0,c2=0;

        for (int i =0;s[i]!='\0';)
        {
            set<char>ss;
            while(ss.size()!=4)
            {
                if(s[i]=='\0')
                {
                    c2=1;
                    break;
                }
                ss.insert(s[i]);
                //cout<<ss.<<" ";
                //if(ss.size()==4)break;
                i++;
                cout<<i<<" df" <<" ";
            }

             if(s[i]=='\0')break;
             c1++;
            i--;
          cout<<"bhh "<<i<<" ";




        }


        cout <<c1<< endl;

    }

    return 0;
}

