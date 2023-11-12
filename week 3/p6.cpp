#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="314159265358979323846264338327";
    while(t--)
    {
      string p;
      cin>>p;
      for(int i=0;i<=p.size();i++)
      {
          if(s==p)
          {
              cout<<s.size()<<endl;
              break;
          }
          else if(p[i]!=s[i])
          {
              cout<<i<<endl;
              break;
          }

      }
    }
    return 0;
}
