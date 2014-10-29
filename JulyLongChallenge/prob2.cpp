#include<iostream>
#include<cstdio>
using namespace std;

long long int t,x,y,val,d,n1,n3;

int main()
{
cin>>t;
while(t--)
    {
    cin>>x>>y;
    if(x<0)
        x*=-1;
    if(y<0)
        y*=-1;

    if(y>x)
    {
        d=y-x;
        n3=d/2;
        n1=d-n3;
        val=(x*2)+n1*1+n3*3;
    }
    else if(x>y)
    {
        d=x-y;
        if(d%2==0)
            val=x*2;
        else
            val=(x*2)+1;
    }
    else
        val=x*2;

    cout<<val<<endl;
    }
return 0;
}
