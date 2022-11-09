    #include<stdio.h>
    #include<string.h>
     
    int main ()
    {
        char str[1000],str1[1000];
     
        gets(str);
        int i,j,len,count=0;
     
     
        len = strlen(str);
     
        for(i=0,j=len-1; i<len,j>=0; i++,j--)
        {
            str1[i]=str[j];
        }
        for(i=0; i<len; i++)
        {
            if(str1[i]!=str[i])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
     
     
     
        return 0;
    }

