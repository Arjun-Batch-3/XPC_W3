#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<string>v(n);
map<char,int>first,last;
map<string,int>m;

for(int i=0;i<n;i++)
{
cin>>v[i];
}
long long int ans=0;
for(int i=0;i<n;i++)
{
ans=ans+first[v[i][0]]+last[v[i][1]]-2*m[v[i]];
first[v[i][0]]++;
last[v[i][1]]++;
m[v[i]]++;
}
cout<<ans<<endl;
}

return 0;}
