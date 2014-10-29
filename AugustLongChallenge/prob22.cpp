#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    long long int x,y,i,temp;
    int flag,ch;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        ch=100;
        scanf("%lld %lld",&x,&y);
        if(x>0 && y>0) ch=1;
        else if(x<0 && y>0) ch=2;
        else if(x<0 && y<0) ch=3;
        else if(x>0 && y<0) ch=4;
        else if(x>0 && y==0) {if(x%2==1)ch=98;else ch=99;}
        else if(x<0 && y==0) {if(x%2==0)ch=98;else ch=99;}
        else if(x==0 && y!=0) {if(y%2==0)ch=98;else ch=99;}
        else if(x==0 && y==0)ch=98;
        switch(ch)
        {
        case 1:
            if(x%2==1)
            {
                if(y%2==0)flag=1;
                else if(y<=(x+1))flag=1;
            }
            else if(x%2==0)
            {
                temp=x+2;
                if(y>=temp && y%2==0)flag=1;
            }
            break;
        case 2:
            if(x%2==0)
            {x=x*(-1);
                if(y%2==0)flag=1;
                else if(y<=x)flag=1;
            }
            else
            {x=x*(-1);
                temp=x+1;
                if(y>=temp && y%2==0)flag=1;
            }
            break;
        case 3:
            if(y%2==0)
            {
                if(x%2==0)flag=1;
                else if(x>=y)flag=1;
            }
            else
            {
                temp=y-1;
                if(x<=temp && x%2==0)flag=1;
            }
            break;
        case 4:
            if(y%2==0)
            {y=y*(-1);
                if(x%2==1)flag=1;
                else if(x<=(y+1))flag=1;

            }
            else
            {y=y*(-1);
                temp=y+2;
                if(x>=temp && x%2==1)flag=1;
            }
            break;
        case 98: flag=1;break;
        case 99: flag=0;break;
        }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
