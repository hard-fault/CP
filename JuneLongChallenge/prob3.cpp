#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int i,j,t,n,k,z,pos;
string s,c,p,temp;
int main()
{
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin>>c[i]>>p[i];

    cin>>s; z=s.size();temp=s;
    for(i=0;i<n;i++)
    {
            pos=temp.find(c[i]);
            if(pos!=-1)
            {
                temp[pos]=' ';
                s[pos]=p[i];
                i--;
            }
    }
    i=0;
    while(i<z && s[i++]=='0');i--;//counting the leading zeroes.

    if(s.find(".")!=-1)
    {
        j=z-1;
        while(s[j--]=='0');j++;//counting the trailing zeroes after decimal point
        if(i==j)
            printf("0\n");
        else{
            if(s[j]=='.')j--;
            for(k=i;k<=j;k++)
                printf("%c",s[k]);
            printf("\n");
            }
        continue;
    }
    for(k=i;k<z;k++)
        printf("%c",s[k]);
    printf("\n");
}
return 0;
}
