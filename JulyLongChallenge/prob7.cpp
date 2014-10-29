#include<iostream>
using namespace std;

int n,m,k,i,j,t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cout<<"C";
            cout<<endl;
        }
    }
return 0;
}
