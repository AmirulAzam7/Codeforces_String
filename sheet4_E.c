    #include<stdio.h>
    #include<string.h>
     
    int main ()
    {
        char s1[1000000];
        scanf("%s",s1);
     
        int i,len,sum=0;
     
        len = strlen(s1);
     
        for(i=0; i<len; i++)
        {
            sum = sum + (s1[i]-'0');
        }
        printf("%d",sum);
     
     
     
        return 0;
    }
