    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string s;
         int m = 0;
     
        getline(cin,s);
     
       for(int i=m; i<=s.size(); i++)
       {
          if(s[i]==' ' || s[i]=='\0')
           {
               reverse(s.begin()+m,s.begin()+i);
               m = i+1;
           }
       }
       cout<<s<<endl;
     
     
        return 0;
    }
