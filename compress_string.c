#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i,j,c=1;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        while(a[i]==a[i+1])
        {
            i++;
            c++;
        }
        printf("%c",a[i]);
        if(c>1)
        {
            printf("%d",c);
        }
        c=1;
    }
}
