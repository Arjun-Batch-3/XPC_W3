#include<bits/stdc++.h>
using namespace std;
bool allEven(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2!=0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,f=0;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
      int c=0;
      if(allEven(v))
      {
         cout<<"YES"<<endl;
      }
      else
      {
          sort(v.begin(),v.end());
          bool l=false;
          for(int i=0;i<v.size();i++)
          {
              if(v[i]%2==1){
                    l=true;
                    c++;
                continue;
              }
              else
              {
                if(l){
                c++;
                }
                else{break;}

              }
          }
          if(c==v.size())
          {
              cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }

      }


    }
    return 0;
}
