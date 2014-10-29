
#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)
#define FOR(i, a, b) for(i = a; i < b ; i++)
#define FORI(it, v) for(it = v.begin(); it != v.end(); it++)
#define VT(t) vector<t>
#define VTI(t) vector<t>::iterator
#define SZ(v) v.size()
#define CLR(v) v.clear()
#define PB(a) push_back(a)
#define MP make_pair
#define ALL(v) v.begin(),v.end()
#define MTTI(t1,t2) map<t1,t2>::iterator
#define F(it) it->first
#define S(it) it->second

typedef long long int ll;
long long ans=0;
char s[20001];
int dp[20001][500];
int main()
{
    FST;

	int t,m,n,w[102][102],i,j,arr1[102][102],arr2[102][102],k,max;

	cin>>t;

	while(t--)
	{
	k=1;
	max=INT_MIN;
	cin>>m>>n;
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	    {
	    cin>>w[i][j];
	    arr1[i][j]=w[i][j];
	    arr2[i][j]=w[i][j];
	    }



	while(k!=n)
		{
		for(i=0;i<n-k;i++)
		  for(j=0;j<n-k;j++)
	         arr1[i][j]+=arr1[i+k][j+k];

	    for(i=k;i<n;i++)
		  for(j=0;j<n-k;j++)
	         {
	         	arr2[i][j]+=arr2[i-k][j+k];

	         }

	     }


	     }

	    for(i=0;i<n-k;i++)
	       for(j=0;j<n-k;j++)
	          if(arr1[i][j]+arr2[i+k][j]>max)
	             max=arr1[i][j]+arr2[i+k][j];

	    k++;
		}

		cout<<max<<"\n";
	}
	return 0;
}

    return 0;
}

