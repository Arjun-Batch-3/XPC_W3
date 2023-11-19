#include<bits/stdc++.h>
using namespace std;
bool check(pair<long long int,int>a,pair<long long int,int> b)
{
if(a.first<b.first)return true;
else
{return false;}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long int>v1(n);
        vector<long long int>v2(n);
        vector<pair<long long int,int>>v4(n);
        for(int i=0;i<n;i++)
        {
        cin>>v1[i];
        v4[i]={v1[i],i};
        }
        for(int i=0;i<n;i++)
        {
        cin>>v2[i];
        }
        sort(v4.begin(),v4.end(),check);
        sort(v2.begin(),v2.end());
        vector<long long int>v3(n,0);
           for(int i=0;i<n;i++)
           {
               v3[v4[i].second]=v2[i];
           }
        for(int i=0;i<n;i++)
        {
            cout<<v3[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
