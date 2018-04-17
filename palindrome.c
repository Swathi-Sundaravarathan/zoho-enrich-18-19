#include<stdio.h>


int check(int n)
{
    int rev=0, temp1=n,temp2;
    while(temp1>0)
    {
        temp2=temp1%10;
        rev=rev*10+temp2;
        temp1=temp1/10;
    }
    if(n==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int palindrome(int n)
{
    int i,temp;
    i=n;
    while(i<=n*2)
    {
        temp=check(i);
        if(temp==1)
        {
            return i;
        }
        else
        {
            i++;
        }
    }
}


int main()
{ 
    int n,temp;
    scanf("%d", &n);
    temp=palindrome(n);
    printf("%d",temp);
}
