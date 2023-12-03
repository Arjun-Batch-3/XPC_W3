#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,q;
        cin >> n>>q;
        vector<long long int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        int ty,val;
        cin>>ty>>val;

        for(int i=0; i<q; i++)
        {
            long long int sum=0;
            if(ty==1)
            {
                for(int j=0; j<n; j++)
                {
                     if(v[j]%2==1)v[j]=v[j]+val;
                }
                for(int j=0;j<n;j++)
                {
                    sum=sum+v[j];
                }
                cout<<sum<<endl;
            }
            else
            {

                for(int j=0; j<n; j++)
                {
                     if(v[j]%2==0)v[j]=v[j]+val;
                }
                for(int j=0;j<n;j++)
                {
                    sum=sum+v[j];
                }
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}
