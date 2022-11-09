    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        string str;
        cin>>str;
     
        sort(str.begin(),str.end());
     
        for(int i=0; i<str.size(); i++)
        {
            int flag = 1;
            for(int j=i+1; j<str.size(); j++)
            {
                if(str[i]==str[j])
                {
                    flag++;
                        i=i+1;
                }
            }
            cout<<str[i]<<" : "<<flag<<endl;
     
     
        }
     
     
     
        return 0;
    }
