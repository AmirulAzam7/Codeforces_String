#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin,s);

  for(int i=0; i<s.size(); i++)
  {
      if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
      {
          s[i]=' ';          //or cout<<" ";
          s.erase(i+1,4);   //or i=i+4;
      }
  }
  cout<<s<<endl;



    return 0;
}
