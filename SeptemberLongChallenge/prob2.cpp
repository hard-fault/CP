#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
using namespace std;

int n,m,d,j,i,k,start;
int a[200005];
char choice;

int main()
{
    cin>>n>>m;

    for(i=0;i<n;i++)
        cin>>a[i];

    start=0;
    for(i=0;i<m;i++)
    {
        fflush(stdin);
        cin>>choice>>d;
        fflush(stdin);
        switch(choice)
        {
            case 'C':
                start=d+start;
                if(start>=n)
                    start=start%n;
                break;
            case 'A':
                start=start-d;
                if(start<0)
                    start=start+n;
                break;
            case 'R':
                int temp=(start+d-1)%n;
                cout<<a[temp]<<endl;
                break;
        }
    }
    return 0;
}
