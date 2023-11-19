#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
       vector<int>v;
         vector<int>v2{3,5,6,8,9,10,12,13,14,15,17,18,19,20,21,23,24,25,26,27,28,30,31,32,33,34,35,36,38,39,40};

       v.push_back(1);
       int sum=1,k1=0,sum2=0;
       int p=k;
       for(int i=1;i<k;i++)
       {
           sum=sum+i;
           if(sum<=n)
           {
               v.push_back(sum);
               sum2=sum;
           }
           else{break;}

       }
         if(v.size()!=k&&sum2!=n)
          {
            int ind;
              for(int i=0;i<v2.size();i++)
              {
                  if(v2[i]==n){
                    ind=i;
                    break;}
              }
              while(v.size()!=k)
              {
                  v.push_back(v2[ind]);
                  ind--;
              }
          }
           if(v.size()!=k&&sum2==n)
           {
                int ind;
              for(int i=0;i<v2.size();i++)
              {
                  if(v2[i]==n-1){
                    ind=i;
                    break;}
              }
              while(v.size()!=k)
              {
                  v.push_back(v2[ind]);
                  ind--;
              }
           }
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i]<<" ";
       }
        cout<<endl;
    }
    return 0;
}
