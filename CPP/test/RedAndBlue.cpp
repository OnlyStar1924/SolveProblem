#include<iostream>

using namespace std;

int main(){
    freopen("in_RedAndBlue.txt","r",stdin);
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        // cout<<s<<endl;
        int i= 0;
        while (i < n)
        {
            /* code */
        // }
        
        // for (int i = 0; i < n; i++)
        // {
            if (s[i] == '?')
            {
                int j = 1;
                for (int jj = i+1; jj < n; jj++)
                {
                    if (s[jj] != '?')
                    {
                        break;
                    }else
                    {
                        j++;
                    }  
                }
                // cout<<j<<endl;
                
                string s1 = "";
                string s2 = "";
                for (int k = 0; k < j; k++)
                {
                    if (k % 2 == 0)
                    {
                        s1[k] = 'R';
                        s2[k] = 'B';
                    }else
                    {
                        s1[k] = 'B';
                        s2[k] = 'R';
                    }
                }
                int t1 =0, t2 =0;
                if(s1[0] == s[i-1])
                {
                    t1++;
                }
                if(s1[i+j-1] == s[i+j])
                {
                    t1++;
                }
                if(s2[0] == s[i-1])
                {
                    t2++;
                }
                if(s2[i+j-1] == s[i+j])
                {
                    t2++;
                }
                
                if (t1 <= t2)
                {
                    for (int p = i; p < i+j; p++)
                    {
                        s[p] = s1[p-i];
                    }
                }else
                {
                    for (int p = i; p < i+j; p++)
                    {
                        s[p] = s2[p-i];
                    }
                }
                i = i +j+1 ;
                
            }else
            {
                i++;
            }
            
            
            
        }
        cout<<s<<endl;

    }
    

    return 0;
}