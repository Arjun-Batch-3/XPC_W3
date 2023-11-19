#include<bits/stdc++.h>
using namespace std;
bool check(int a[2][2])
{

    if(a[0][0]<a[0][1]&&a[1][0]<a[1][1]&&a[0][0]<a[1][0]&&a[0][1]<a[1][1])
    {

        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[2][2];
        int f=0;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>a[i][j];
            }
        }
        int a1=a[0][0];
        int b=a[0][1];
        int c=a[1][0];
        int d=a[1][1];
        if(check(a))
        {
            cout<<"YES"<<endl;
            f=1;
        }
        else
        {
            for(int i=0; i<3; i++)
            {
                a[0][0]=c;
                a[0][1]=a1;
                a[1][0]=d;
                a[1][1]=b;
                if(check(a))
                {
                    f=1;
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    a1=a[0][0];
                    b=a[0][1];
                    c=a[1][0];
                    d=a[1][1];
                }


            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

