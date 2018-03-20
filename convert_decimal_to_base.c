#include<stdio.h>
#include <stdlib.h>

int main()
{
    int num,base,i=0,curr=0,temp,a[100];
    
    scanf("%d %d",&num,&base);
    
    while(num>0)
    {
        a[i++]=num%base;
        num=num/base;
    }
    
    for(i=i-1;i>=0;i--)
    {
        curr=(curr*10)+a[i];
    }
    
    printf("%d",curr);
    
}
