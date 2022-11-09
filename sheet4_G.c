    #include<stdio.h.>
    #include<string.h>
     
    int main ()
    {
        char str[100000];
        int len,i;
     
        scanf("%s",str);
     
        len = strlen(str);
     
        for(i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf("%c",str[i]+32);
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                printf("%c",str[i]-32);
            }
            else if(str[i]==',')
            {
                str[i]= ' ';
                printf("%c",str[i]);
            }
        }
     
     
     
        return 0;
    }
