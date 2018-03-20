#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100];
    int i,j,count,l;
    
    scanf("%s",s);
    l=strlen(s);
    
    for(i=0;i<l;i++)
    {
        count=1;
        while(i<l)
        {
            if(s[i]==s[i+1])
            {
                count++;
                i++;
            }
            else 
            {
                break;
            }
        }
        printf("%c%d",s[i],count);
    }
    
}
