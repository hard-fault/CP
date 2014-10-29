#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    char a[100],b[100];
    int m,n,found=0;
    gets(a);
    gets(b);
    m=strlen(b);n=strlen(a);
    for(int i=0;i<n-m;i++)
    {
        int j=0;
        while(j<m && a[i+j]==b[j++]);
        if(j==m)found=1;
    }
    if(found)cout<<"FOUND";
    else cout<<"NOT FOUND";
}
