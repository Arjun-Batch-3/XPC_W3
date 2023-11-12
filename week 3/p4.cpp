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
        string s;
        cin>>s;
        vector<long long int>v;
        long long int max1=0;
        long long int operation=0;
        for(int i=0; i<n; i++)
        {
            long long R=n-i+1;
            long long L=i;
            if(s[i]=='R')
            {
                if(L>R)
                {
                    v.push_back(L-R);
                    operation++;
                    max1=max1+L;

                }
                else
                {
                    max1=max1+R;
                }
            }
            else
            {
                if(R>L)
                {
                    v.push_back(R-L);
                    operation++;
                    max1=max1+R;

                }
                else
                {
                    max1=max1+L;
                }
            }

        }
        vector<long long int>s1(n+1);
        for(int i=operation-1;i<n;i++)
        {
            s1[i]=max1;
        }
        sort(v.begin(),v.end(),greater<long long int>());
        for(int i=operation-2;i>=0;i--)
        {
            max1=max1-v.back();
            v.pop_back();
            s1[i]=max1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<s1[i]<<" ";
        }
        cout<<endl;

    }
}
