    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n,maxx=1;
        cin>>n;
     
        string s;
        cin>>s;
     
        for(int i=0,j=1; i<n,j<n; i++,j++)
        {
            if(s[i]!=s[j])
            {
                maxx++;
            }
        }
        cout<<maxx<<endl;
     
        return 0;
    }
