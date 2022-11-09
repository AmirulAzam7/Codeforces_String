    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
     
        string str;
        int flag = 0;
     
        for(int i=0; i<t; i++)
        {
            cin>>str;
            flag = 0;
            for(int j=0; j<str.size(); j++)
            {
                if((str[j]=='0' && str[j+1]=='1' && str[j+2]=='0') || (str[j]=='1' && str[j+1]=='0' && str[j+2]=='1'))
                {
                    flag=1;
                    break;
                }
            }
     
                if(flag==1)
                {
                    cout<<"Good"<<endl;
                }
                else
                {
                    cout<<"Bad"<<endl;
                }
     
            }
     
     
     
     
        return 0;
    }
