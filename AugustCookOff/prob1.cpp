#include<iostream>
using namespace std;

long long int i,j,k,t,n,m,*a,l,r,flag=0;
int main()
{

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a=new long int[n+1];
        a[0]=-1;
        flag=0;
        for(i=1;i<=n;i++)
        {
            cin>>j;

            if(j==i)a[i]=0;
            else a[i]=1;
        }

        for(i=0;i<m;i++)
        {
            cin>>l>>r;
            if(l==r)continue;
            for(j=l;j<=r;j++){a[j]=0;}
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==1)
            {flag=1;break;}
        }
        if(flag==0)
            cout<<"Possible\n";
        else
            cout<<"Impossible\n";
    }
}
