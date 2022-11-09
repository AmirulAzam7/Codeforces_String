    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string s;
         int m = 0,flag=0;
     
        getline(cin,s);
     
       for(int i=m; i<=s.size(); i++)
       {
          if(s[i]==' ' || s[i]=='\0' || s[i]=='.' || s[i]==',' || s[i]=='?' || s[i]=='!')
           {
               if(s[i-1]>='A' && s[i-1]<='Z' || s[i-1]>='a' && s[i-1]<='z')
               {
                   flag++;
               }
               m = i+1;
           }
       }
       cout<<flag<<endl;
     
     
     
        return 0;
    }

