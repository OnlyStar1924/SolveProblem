#include<iostream>
#include<fstream>

using namespace std;
     
    int main()
    {
        freopen("in_StringsEqualization.txt", "r", stdin);
        // ifstream infile;
        // infile.open("in_StringsEqualization.txt");
     
        // int i, j, k;
        // int n, m, q;
        int q;
        string s, t;
     
        cin>>q;
        while(q--)
        {
            cin >> s >> t;
     
            bool f = false;
     
            int n = s.length();
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(s[i] == t[j])
                    {
                        f = true;
                        break;
                    }
                }
     
                if(f)break;
            }
     
            if(f)
                cout<<"YES";
            else
                cout<<"NO";
     
            cout<<endl;
        }
     
        // infile.close();
        return 0;
    }