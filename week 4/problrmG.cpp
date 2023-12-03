#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<q; i++)
        {
            long long int sum=0;
            int type,j;
            cin>>type>>j;
            if(type==0)
            {
                for(int i=0; i<v.size(); i++)
                {
                    if(v[i]%2==0)
                    {
                        v[i]=v[i]+j;
                    }
                    sum=sum+v[i];
                }
            }
            else if(type==1)
            {
                for(int i=0; i<v.size(); i++)
                {
                    if(v[i]%2==1)
                    {
                        v[i]=v[i]+j;


                    }
                    sum=sum+v[i];
                }



            }
cout<<sum<<endl;

        }

    }
    return 0;
}
