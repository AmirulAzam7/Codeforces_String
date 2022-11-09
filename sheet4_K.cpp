    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t,small;
        cin>>t;
     
        for(int i=0; i<t; i++)
        {
            string str,str1,str2;
            cin>>str;
            cin>>str1;
     
           int len1 = str.length();
           int len2 = str1.length();
     
          if(len1<len2)
          {
              for(int j=0; j<len1; j++)
              {
                  cout<<str[j]<<str1[j];
              }
              for(int k=len1; k<len2; k++)
              {
                  cout<<str1[k];
              }
          }
          else
          {
             for(int j=0; j<len2; j++)
              {
                  cout<<str[j]<<str1[j];
              }
              for(int k=len2; k<len1; k++)
              {
                  cout<<str[k];
              }
          }
           cout<<endl;
        }
     
      return 0;
    }
