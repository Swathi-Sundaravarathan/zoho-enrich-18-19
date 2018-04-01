#include<stdio.h>
#include<string.h>


int uniquestring(char *str)
{
    int i,j,l,c;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        c=0;
        
        for(j=i+1;j<l;j++)
        {
            if( (str[i] == str[j]) && (str[j] != '*') )
            {
                c++;
                str[j]='*';
            }
        }
    }
     print(str,l);
}


int print(char *str,int l)
{
    for(int i=0;i<l;i++)
    {
        if(str[i]!='*')
        {
            printf("%c",str[i]);
        }
    }
}


int main()
{
    char str[100];
    scanf("%s",str);
    uniquestring(str);
}
