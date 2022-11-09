    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string s;
        getline(cin,s);
     
        int m=0;
     
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='=' && m==0)
            {
                cout<<"username: ";
                for(int j=i+1; j<=j+1; j++)
                {
                    cout<<s[j];
                    if(s[j+1]=='&')
                    {
                        cout<<endl;
                        m = m+1;
                        break;
                    }
                }
            }
            else if(s[i]=='=' && m==1)
            {
                cout<<"pwd: ";
                for(int j=i+1; j<=j+1; j++)
                {
                    cout<<s[j];
                    if(s[j+1]=='&')
                    {
                        cout<<endl;
                        m = m+1;
                        break;
                    }
                }
            }
            else if(s[i]=='=' && m==2)
            {
                cout<<"profile: ";
                for(int j=i+1; j<=j+1; j++)
                {
                    cout<<s[j];
                    if(s[j+1]=='&')
                    {
                        cout<<endl;
                        m = m+1;
                        break;
                    }
                }
            }
            else if(s[i]=='=' && m==3)
            {
                cout<<"role: ";
                for(int j=i+1; j<=j+1; j++)
                {
                    cout<<s[j];
                    if(s[j+1]=='&')
                    {
                        cout<<endl;
                        m = m+1;
                        break;
                    }
                }
            }
            else if(s[i]=='=' && m==4)
            {
                cout<<"key: ";
                for(int j=i+1; j<=j+1; j++)
                {
                    cout<<s[j];
                    if(s[j+1]=='\0')
                    {
                        cout<<endl;
                        m = m+1;
                        break;
                    }
                }
            }
        }
     
     
       return 0;
    }
