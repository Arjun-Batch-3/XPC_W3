#include<bits/stdc++.h>
using namespace std;
int left(int ind)
{
 return ind;
}
int right(int ind,int sz)
{
return sz-ind;
}
bool cmp(pair<int,int>p,pair<int,int>q)
{
    if(p.first<q.first)return true;
    else
        return false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<int ,int>>v;
  for(int i=0;i<s.size();i++)
  {
     if(s[i]=='L')
     {
        v.push_back( {left(i),i});
     }
     else
     {
         v.push_back({right(i,n-1),i});
     }


  }

for(int i=0;i<v.size();i++)
{
     sort(v.begin(),v.end(),cmp);
     int sum=0;
          if(v[0].first<=v[1].first){
           if(s[v[0].second]=='L')
           {s[v[0].second]='R';

             v[0]={max(v[0].first,right(v[0].second,n-1)),v[0].second};

           }
           else
           {
            s[v[0].second]='L';
            v[0]={max(v[0].first,left(v[0].second)),v[0].second};
           }
          }

   for(int i=0;i<v.size();i++)
   {
       sum=sum+v[i].first;
   }
cout<<sum<<" ";
}

cout<<endl;
  }
    return 0;
}
