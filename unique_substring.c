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
     substring(str);
}
int substring(char *str)
{
    int l,i,temp=0,start=0;
    for(i=0;i<l;i++)
    {
      if(str[i]!='*')
      {
        c++;
      }
      else
      {
        if(c>temp)
        {
          end=start+c;
          temp=c;
          start=i+1;
        }
      }
    }
  print(str,start,end)
}


int print(char *str,int start,int end)
{
    for(int i=start;i<=end;i++)
    {
       printf("%c",str[i]);
    }
}


int main()
{
    char str[100];
    scanf("%s",str);
    uniquestring(str);
}
