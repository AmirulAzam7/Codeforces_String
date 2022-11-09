    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string str;
     
        getline(cin,str);
     
        int len = str.length();
     
        for(int i=0; i<len; i++)
        {
            if(str[i]=='\\')
                break;
     
            cout<<str[i];
        }
     
        return 0;
    }

