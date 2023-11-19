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
        //cout<<"dfg"<<count1[(int)'a'].first<<endl;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                if(count1[(int)s[i]].second!=true)
                {
                    count1[(int)s[i]].second=true;
                    count1[(int)s[i]+32].second=true;
                    if(count1[(int)s[i]].first>count1[(int)s[i]+32].first)

                    {
                        c=c+count1[(int)s[i]+32].first;
                        int rem=count1[(int)s[i]].first-count1[(int)s[i]+32].first;
                        while(n!=0&&rem>1)
                        {
                            rem=rem-2;
                            n--;
                            c++;
                        }
                    }

                    else if(count1[(int)s[i]+32].first>count1[(int)s[i]].first)
                    {
                        c=c+count1[(int)s[i]].first;
                        int rem=count1[(int)s[i]+32].first-count1[(int)s[i]].first;
                        while(n!=0&&rem>1)
                        {
                            //cout<<c<<" ";
                            rem=rem-2;
                            n--;
                            c++;
                        }
                    }
                    else
                    {

                        c=c+count1[(int)s[i]].first;
                    }

                }

            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                if(count1[(int)s[i]].second!=true)
                {
                    count1[(int)s[i]].second=true;
                    count1[(int)s[i]-32].second=true;
                    if(count1[(int)s[i]].first>count1[(int)s[i]-32].first)
                    {
                        c=c+count1[(int)s[i]-32].first;
                        int rem=count1[(int)s[i]].first-count1[(int)s[i]-32].first;
                        //cout<<"rem "<<rem<<endl;
                           // cout<<"c "<<c<<endl;
                        while(n!=0&&rem>1)
                        {
                           // cout<<c<<"fhfkekek";
                            rem=rem-2;
                            n--;
                            c++;
                        }
                    }
                    else if(count1[(int)s[i]-32].first>count1[(int)s[i]].first)
                    {
                        c=c+count1[(int)s[i]].first;
                        int rem=count1[(int)s[i]-32].first-count1[(int)s[i]].first;
                       // cout<<"rem "<<rem<<endl;
                        //cout<<"c "<<c<<endl;
                        while(n!=0&&rem>1)
                        {
                            //cout<<c<<"fhfkekek";
                            rem=rem-2;
                            n--;
                            c++;
                        }
                    }
                    else
                    {
                        c=c+count1[(int)s[i]].first;
                    }

                }

            }
        }


        cout<<c<<endl;
    }

    return 0;
}

