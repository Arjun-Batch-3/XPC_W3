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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            cnt[v[i]]++;
        }
        int c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<=n;i++)
        {
            int element=v[i];
            if(cnt[v[i]]>0)
            {
              c++;
            while(cnt[element]>0)
            {
                cnt[element]--;
                element++;

            }
            }
        }
        cout<<c<<endl;
    }
}
