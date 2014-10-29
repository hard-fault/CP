#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;

int n,p,i,j,aa,bb,p_aa,p_bb;
long long int k,*diff;

struct z
{
    int index;
    long long int value;
};

bool compare(z lhs, z rhs) { return lhs.value < rhs.value; }

int main()
{
    scanf("%d %lld %d",&n,&k,&p);
    z a[n];
    diff=new long long int[n-1];
    for(i=0;i<n;i++)
        {
            a[i].index=i;

            scanf("%lld",&(a[i].value));
        }
    sort(a, a+n, compare);
    /*for(i=0;i<n;i++)
        cout<<a[i].index<<"->"<<a[i].value<<endl;*/
    for(i=0;i<n-1;i++)
        diff[i]=(a[i].value)-(a[i+1].value);
    while(p--)
    {
        cin>>aa>>bb;

          cout<<"Yes\n";
        else
            {

            }
    }
    return 0;
}
