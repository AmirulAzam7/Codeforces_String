#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt = 0,l=0,r=0,m=0;
    for(int i=0; i<s.size(); i++)
    {
            if(s[i]=='L')
            {
                l++;

                if(l==r)
                {
                    cnt++;
                    l=0;
                    r=0;
                }

            }
            else if(s[i]=='R')
            {
                r++;

                if(l==r)
                {
                    cnt++;
                    l=0;
                    r=0;
                }
            }
        }

    cout<<cnt<<endl;

     for(int i=0; i<s.size(); i++)
    {
            if(s[i]=='L')
            {
                l++;

                if(l==r)
                {
                    for(int j=m; j<l+r+m; j++)
                    {
                        cout<<s[j];
                    }
                    cout<<endl;
                    m=m+l+r;
                    l=0;
                    r=0;
                }

            }
            else if(s[i]=='R')
            {
                r++;

                if(l==r)
                {
                   for(int j=m; j<l+r+m; j++)
                    {
                        cout<<s[j];
                    }
                    cout<<endl;
                    m=m+l+r;
                    l=0;
                    r=0;
                }
            }
        }


    return 0;
}
