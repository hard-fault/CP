
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,i,j,l;
    int a[105][105];
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            a[i][j]=0;
    int x,y;
	while(k--)
	{
        cin>>x>>y;
        a[x-1][y-1]=1;
    }
    int count=0;int ii,jj;

    vector < pair < int,int > > index;
    k=0;
    int flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
                {flag=0;continue;}
            else
            {
                if(flag==0)
                {
                    index.push_back(make_pair(i,j));
                    count++;
                    flag=1;
                }
            }
        }
    }

    cout<<count<<endl;
    for(i=0;i<count;i++)
        cout<<index[i].first+1<<" "<<index[i].second+1<<" 0"<<endl;

return 0;
}



