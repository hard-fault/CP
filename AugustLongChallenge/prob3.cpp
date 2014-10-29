#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    int t,n,m,c,a[402],i,j,count,k,min,index,z[402];
    scanf("%d",&t);
    while(t--)
    {
        count=k=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<400;i++){a[i]=0;z[i]=0;}
        for(i=0;i<m;i++)
        {
            //cout<<i<<"\n";
            scanf("%d",&c);

            if(k<n && z[c]==0)
            {
                a[k++]=c;
                z[c]=1;
                count++;
            }
            else if(z[c]==0)
            {
                min=500;index=-1;
                for(j=0;j<n;j++)
                    if(a[j]<min)
                    {
                        min=a[j];index=j;
                    }
                a[index]=c;z[c]=1;
                z[min]=0;
                count++;
            }
        }
        cout<<count<<endl;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
}

