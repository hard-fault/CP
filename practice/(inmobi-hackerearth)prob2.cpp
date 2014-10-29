#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int *a,*sum,i,n,j,temp,t;
    cin>>t;

    while(t--)
    {
    	cin>>n;
    	a=new int[n];
    	sum=new int[n/2];
    	for(i=0;i<n;i++)
    		cin>>a[i];

    	sort(a,a+n);
    	int j=n-1;
    	for(i=0;i<n/2;i++,j--)
			{sum[i]=a[i]+a[j];}
		sort(sum,sum+(n/2));
		temp=sum[n-1]-sum[0];
		cout<<temp<<endl;
    }
    return 0;
}
