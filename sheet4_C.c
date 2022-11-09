    #include<iostream>
    #include<string.h>
    using namespace std;
     
    int main()
    {
        char X[100], Y[100];
        int len;
        gets(X);
        gets(Y);
        len = strcmp(X,Y);
        if( len>0 || len==0 )
        {
            cout<<Y<<endl;
        }
        else
        {
            cout<<X<<endl;
        }
        return 0;
    }
