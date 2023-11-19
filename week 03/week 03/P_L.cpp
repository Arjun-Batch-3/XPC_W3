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
        int c=0;
        set<vector<char>>ss;
        if(s.length()==2)cout<<1<<endl;
        else{
        for(int i=0; i<n-2; i++)
        {
            vector<char>v1;
            vector<char>v2;
            if(i<n&&i+1<n)
            {
                v1.push_back(s[i]);
                v1.push_back(s[i+1]);
            }
            if(i+1<n&&i+2<n)
            {
                v2.push_back(s[i+1]);
                v2.push_back(s[i+2]);
            }
            if(v1.size()!=0)
                ss.insert(v1);
            if(v2.size()!=0)
                ss.insert(v2);
        }
        cout<<ss.size()<<endl;
        }
    }
    return 0;
}
