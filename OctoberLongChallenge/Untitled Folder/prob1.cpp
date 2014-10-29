#include<bits/stdc++.h>
using namespace std;

int a[100000];
int main()
{
    long long int t,m,n,maxi,i;
	long long int initial_m;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        maxi=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>maxi)maxi=a[i];
        }
	initial_m=0;
	for(i=0;i<n;i++)
		initial_m+=(maxi-a[i]);
	//cout<<"initial m = "<<initial_m<<endl;
	if(m<initial_m)
		cout<<"No\n";
	else if((m-initial_m)%n==0)
		cout<<"Yes\n";
	else
		cout<<"No\n";
   }
}
