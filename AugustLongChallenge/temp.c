#include<stdio.h>
#include<string.h>
void cpy(char *t,char *s)
{
    while(*t++=*s++);
}
int main()
{
    char *s,*t;
    int n,i=0,a[5]={1,2,3,4,5},b[5000][5000];
    //char a[]="Hello MSRIT",b[]="Hell";
    //int i,j;
    s="hello world";
    t=(char*)malloc(sizeof(char)*10);
    //cpy(t,s);
    //printf("%s",t);
    n=strlen(s);
    printf("%d\n",n);
    while(n--)
    {
        //printf("%c\n",s[i]);
        t[i]=s[i];
        i++;
    }
    printf("%s",t);
    printf("\n\n%d %d %d %d",sizeof(char),sizeof(int),sizeof(long),sizeof(long long int));
    printf("\n%d",a[10000]);
    /*t="ell";
    i=strstr(s,t);
    j=strstr(a,b);
    printf("%s %s %s",s,i,j);*/
}
