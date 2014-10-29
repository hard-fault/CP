#include<cstdio>
using namespace std;

long long int t,count=0,n,i;
char a[100002];
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        scanf("%s",a);
        for(i=0;i<n;i++)
            if(a[i]=='1')
                count++;
        count=count*(count+1)/2;
        printf("%lld\n",count);
    }
}
