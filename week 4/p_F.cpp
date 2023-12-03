#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> s;

        vector<pair<char, bool>> v2(n);
        for (int i = 0; i < n; i++)
        {
            v2[i].second = false;
        }

        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (v2[i].second != true)
            {
                v2[i].first = s[x];

                v2[i].second = true;
            }

            for (int j = i ; j < n; j++)
            {
                if (v[i] == v[j]&&v2[j].second!=true)
                {
                    v2[j].first = s[x];
                   // x++;
                    v2[j].second = true;
                }
            }
            x++;
        }

       string s1 = "";
for (int i = 0; i < n; i++)
{
    string p(1, v2[i].first);
    s1 = s1 + p;
}
       // cout << s1 << " " << "sjhfd" << endl;
        if (s1 == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


        // Print characters in v2[i].first
       /* for (int i = 0; i < n; i++)
        {
            cout << v2[i].first << " ";
        }
        cout << endl;*/
    }

    return 0;
}

