#include<stdio.h>
int main()
{
  int i,n,temp=0,a[1000],x;
  
  scanf("%d %d",&n,&x);
  
  while(n>0)
  {
    a[temp++]=n%10;
    n=n/10;
  }
  
  x=x%temp;
  
  for(i=x-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  
  for(i=temp-1;i>=x;i--)
  {
    printf("%d",a[i]);
  }
  
}
  
    
