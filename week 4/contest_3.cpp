#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
     int n;
     cin>>n;
        string s;
        cin >> s;
int c=0;
for(int i=0;s[i]!='\0';i++)
{
    int ct=0;
    int h=0;
    if(s[i]=='#')h++;
   if(h==2)
   {
     c=c+(ct/2);
     ct=0;
     h=0;
   }
   else
   {
    ct++;
   }

}

        cout <<c << endl;
    }

    return 0;
}


