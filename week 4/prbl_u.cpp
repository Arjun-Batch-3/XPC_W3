#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
  map<char,bool>m;
  set<char>ss;
  int c1=0,c2=0;
      for(int i=0;s[i]!='\0';i++)
      {
         m[s[i]]=false;
      }
          for(int i=0;s[i]!='\0';)
      {
             if(m[s[i]]==false)
             {
             ss.insert(s[i]);
             m[s[i]]=true;
             }
             //cout<<i<<" s ";
             int f=0;
             if(ss.size()==3)
             {
                 c2=1;
                 i++;
                 while(m[s[i]]==true)
                 {
                     f=1;
                    i++;
                  //  cout<<i<<" x ";
                 }

                c1++;
                ss.clear();
                m.clear();
               i=i-1;
             }
             i=i+1;

      }
      if(ss.size()==0)
      cout<<c1<<endl;
      else{cout<<c1+1<<endl;}
   }
    return 0;
}

