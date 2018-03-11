#include<stdio.h>

int main() 
{
    int n,i,j,c=0,a[1000],x=1,p;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            continue;
        }
        else
        {
            x++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        p=a[i];
        c=0;
        if(a[i]!=x)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]==a[i])
                {
                    c++;
                }
            }
            for(j=0;j<n;j++)
            {
                if(a[j]==p)
                {
                    a[j]=x;
                }
            }
            printf("%d --> %d",p,c);
            printf("\n");
        }
    }
}
