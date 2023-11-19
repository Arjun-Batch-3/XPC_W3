#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       vector<int>exist(1050,0);
       for(int i=0;i<n;i++)
       {
           exist[v[i]]=1;
       }
       int max=INT_MIN;
       for(int i=0;i<n;i++)
       {
           if(v[i]>max)max=v[i];
       }
       int sum=0,f=0;
       int ind=0;
       while(1)
       {
           if(exist[ind]!=1)
           {
               sum=sum+ind;
               exist[ind]=1;
               //cout<<sum<<" ";
           }
           if(sum>s)
           {
              f=1;
              break;
           }
           else if(sum==s)
           {
               for(int i=0;i<=max;i++)
               {
                   if(exist[i]!=1)
                   {
                       f=1;
                       break;
                   }
               }
              break;
           }
           ind++;
       }
       if(f==0)cout<<"YES"<<endl;
       else{cout<<"NO"<<endl;}
    }

    return 0;
}

