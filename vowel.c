#include<stdio.h>
#include<string.h>

int vowel(char *s,int l)
{
    int a[5]={0,0,0,0,0};
    int i;
    for(i=0;i<l;i++)
    {
        if(tolower(s[i])=='a')
        {
            a[0]++;
        }
        if(tolower(s[i])=='e')
        {
            a[1]++;
        }
        if(tolower(s[i])=='i')
        {
            a[2]++;
        }
        if(tolower(s[i])=='o')
        {
            a[3]++;
        }
        if(tolower(s[i])=='u')
        {
            a[4]++;
        }
    }
    print(a);
}
int print(int a[])
{
    int i;
    char s1[20]="aeiou";
    for(i=0;i<5;i++)
    {
        if(a[i]!=0)
        {
            printf("%c --> %d",s1[i],a[i]);
            printf("\n");
        }
    }
}

int main()
{
    char s[100];
    int l;
    scanf("%[^\n]s",s);
    l=strlen(s);
    vowel(s,l);
}
