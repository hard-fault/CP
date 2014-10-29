#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,*a;
	vector < pair<int,int> > b;
	vector < pair<int,int> > c;
	long long int k,d,e,e1,i,j,b_count,c_count;
	cin>>t;
	b.push_back(make_pair(0,0));
	c.push_back(make_pair(0,0));
	while(t--)
	{
		b_count=c_count=0;
		b.clear();
		c.clear();
		cin>>n;
		a=new int[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
				{b.push_back(make_pair(i,a[i]));b_count++;}//all positive numbers with indices
			else if(a[i]>0)
				{c.push_back(make_pair(i,a[i]));c_count++;}// all negative numbers with indices
		}
		i=j=e=e1=k=0;
		int prev=c[0].second;
		while(i<b_count && j<c_count)
		{
			k=b[i].second+c[j].second;
			e1=abs(b[i].first-c[j].first);
			if(k==0)
			{i++;j++;d=abs(prev);}
			else if(k<0)
			{j++;d=abs(b[i].second-k);b[i].second=k;}
			else if(k>0)
			{i++;d=abs(c[j].second-k);c[j].second=k;}
			e+=(e1*d);
			prev=c[j].second;
		}
		cout<<e<<endl;
	}
	return 0;
}



