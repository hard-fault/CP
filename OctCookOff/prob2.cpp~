#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,i,j,pos,*b,start,start2,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		b=new int[n+n];
		for(i=0;i<n;i++)
			b[i]=-1;
		for(i=0;i<m;i++)
		{
			scanf("%d",&pos);
			start=1;start2=0;
			for(j=pos-1,k=pos;j>=0 || k<n;j--,k++)
			{
				if(start>b[j] && j>=0)
					b[j]=start;
				if(start>b[k] && k<n)
					b[k]=start2;
				start++;start2++;
			}
		}
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}

