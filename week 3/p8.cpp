#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
int x=a.second;
int y=b.second;
if(x<y)return true;
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
        vector<vector<int>>v1;
        vector<pair<int,int>>v2;
        vector<int>c(11,0);
      for(int i=0;i<n;i++)
      {
          vector<int>v;
          for(int j=0;j<n-1;j++)
          {
             int num;
             cin>>num;
             v.push_back(num);
          }
          v1.push_back(v);
      }
      for(int i=0;i<11;i++)
      {
            c[v1[i][n-2]]++;
          //cout<<item<<" ";
      }
      int in=0;
      for(int i=0;i<11;i++)
      {
        if(c[i]>0)
        {
             v2.push_back({i,c[v1[i][n-2]]});
        }
      }
        sort(v2.begin(),v2.end(),cmp);

        int ind1,ind2;
        for(int i=0;i<11;i++)
        {
            if(c[i]>1)
            {
              ind1=i;
            }
        }
vector<int>q;
if(v1[v2[0].first][n-2]!=ind1)
q=v1[v2[0].first];
else{
 q=v1[v2[1].first];
}
q.push_back(ind1);
for(int n=0;n<q.size();n++)
{
    cout<<q[n]<<" ";
}
      cout<<endl;
    }
    return 0;
}
