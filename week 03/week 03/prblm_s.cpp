#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,m,c=0;
        cin>>m>>n;
        cin.ignore();
        string s;
        cin>>s;
        vector<pair<int,bool>>count1(500);
        for(int i=0; i<s.size(); i++)
        {
            char ch=s[i];
            int p=(int)ch;
            count1[p].first++;
            count1[p].second=false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z'&&m!=0)
            {
                if(count1[(int)s[i]].second!=true)
                {
                    count1[(int)s[i]].second=true;
                    if(count1[(int)s[i]].first>count1[(int)s[i]+32].first)
                    {
                        while(1)
                        {
                            if((count1[(int)s[i]].first-1)!=-1)
                           count1[(int)s[i]].first--;
                            if(count1[(int)s[i]+32].first-1!=-1)
                            count1[(int)s[i]+32].first--;
                            if((count1[(int)s[i]].first-1)!=-1&&count1[(int)s[i]+32].first-1!=-1){
                            c++;
                            m--;
                            }

                            if(count1[(int)s[i]+32].first==0&&count1[(int)s[i]].first!=0)
                            {
                                c=c+(count1[(int)s[i]].first/2);
                            }
                            else
                            {
                                if(count1[(int)s[i]].first==count1[(int)s[i]+32].first)
                                {
                                    c=c+(count1[(int)s[i]].first/2);
                                }
                            }



                            if(m==0||count1[(int)s[i]+32].first==0||(count1[(int)s[i]].first==count1[(int)s[i]+32].first))break;
                        }
                    }

                    else if(count1[(int)s[i]+32].first>count1[(int)s[i]].first)
                    {

                        while(1)
                        {

                             if((count1[(int)s[i]].first-1)!=-1)
                           count1[(int)s[i]].first--;
                            if(count1[(int)s[i]+32].first-1!=-1)
                            count1[(int)s[i]+32].first--;
                            if((count1[(int)s[i]].first-1)!=-1&&count1[(int)s[i]+32].first-1!=-1){
                            c++;
                            m--;
                            }
                            if(count1[(int)s[i]].first==0&&count1[(int)s[i]+32].first!=0)
                            {
                                c=c+(count1[(int)s[i]+32].first/2);
                            }
                            else
                            {
                                if(count1[(int)s[i]].first==count1[(int)s[i]+32].first)
                                {
                                    c=c+(count1[(int)s[i]].first/2);
                                }
                            }


                            if(m==0||count1[(int)s[i]].first==0||(count1[(int)s[i]].first==count1[(int)s[i]+32].first))break;
                        }
                    }
                }
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                if(count1[(int)s[i]].second!=true)
                {
                    count1[(int)s[i]].second=true;

                    if(count1[(int)s[i]].first>count1[(int)s[i]-32].first)
                    {
                        while(1)
                        {
                           if((count1[(int)s[i]].first-1)!=-1)
                           count1[(int)s[i]].first--;
                           if(count1[(int)s[i]-32].first-1!=-1)
                            count1[(int)s[i]-32].first--;
                            if((count1[(int)s[i]].first-1)!=-1&&count1[(int)s[i]-32].first-1!=-1){
                            c++;
                            m--;
                            }
                            if(count1[(int)s[i]-32].first==0&&count1[(int)s[i]].first!=0)
                            {
                                c=c+(count1[(int)s[i]].first);
                            }
                            else
                            {
                                if(count1[(int)s[i]].first==count1[(int)s[i]-32].first)
                                {
                                    c=c+(count1[(int)s[i]].first);
                                }
                            }



                            if(m==0||count1[(int)s[i]-32].first==0||(count1[(int)s[i]].first==count1[(int)s[i]-32].first))break;
                        }
                    }
                    else if(count1[(int)s[i]-32].first>count1[(int)s[i]].first)
                    {

                        while(1)
                        {
                              if((count1[(int)s[i]].first-1)!=-1)
                           count1[(int)s[i]].first--;
                           if(count1[(int)s[i]-32].first-1!=-1)
                            count1[(int)s[i]-32].first--;
                            if((count1[(int)s[i]].first-1)!=-1&&count1[(int)s[i]-32].first-1!=-1){
                            c++;
                            m--;
                            }
                            if(count1[(int)s[i]].first==0&&count1[(int)s[i]-32].first!=0)
                            {
                                c=c+(count1[(int)s[i]-32].first);
                            }
                            else
                            {
                                if(count1[(int)s[i]].first==count1[(int)s[i]-32].first)
                                {
                                    c=c+(count1[(int)s[i]].first);
                                }
                            }


                            if(m==0||count1[(int)s[i]].first==0||(count1[(int)s[i]].first==count1[(int)s[i]-32].first))break;
                        }
                    }

                }



                if(m==0)
                {
                    break;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
