    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string s,s1;
        int flag = 0,k=0;
        cin>>s;
     
        s1 = "hello";
     
        for(int i=0; i<s1.size(); i++)
        {
            for(int j=k; j<s.size(); j++)
            {
                if(s1[i]==s[j])
                {
                    k = j+1;
                    flag++;
                    break;
                }
            }
        }
        if(flag==s1.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
     
     
        return 0;
    }
