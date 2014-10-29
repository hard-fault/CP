#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int **a,n,m,i,j;
int main()
{


cin>>n>>m;
a=new int*[n];
for(i=0;i<n;i++)
    a[i]=new int[n];
fill(&a[0][0],&a[0][0]+(n*n),0);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<sizeof(a);
}
