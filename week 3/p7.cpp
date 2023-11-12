#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        cout<<s-r<<" ";
       // int v[n-1];
        int pre[n-1]={0};
       // vector<int>v(n-1);

          int p=0;
          int sum=0;
          while(1)
          {
              if(p==n-1)p=p%(n-1);
              pre[p]++;
            //  z[p]++;
            sum++;
              p++;
              if(sum==r)break;

          }

for(int i=0;i<n-1;i++)
{
    cout<<pre[i]<<" ";
}
cout<<endl;
    }
    return 0;
}
