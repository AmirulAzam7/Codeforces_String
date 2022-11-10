#include<bits/stdc++.h>
using namespace std;

int main()
{
    string key, org,s;

    key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int z = org.size();

    int a;
    cin>>a;
    getchar();
    getline(cin,s);

    if(a==1)
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<z; j++)
            {
                if(s[i]==org[j])
                {
                   cout<<key[j];
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<z; j++)
            {
                if(s[i]==key[j])
                {
                   cout<<org[j];
                }
            }
        }
    }


    return 0;
}
