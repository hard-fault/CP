#include<bits/stdc++.h>
using namespace std;

int main()
{
	int R,G,B,t,M;
	long long int *a,i,j,k,l,max,max_index,temp,start,end;
	cin>>t;
	while(t--)
	{
		cin>>R>>G>>B>>M;
		a=new long long int[R+G+B];
		max=-1;
		for(i=0;i<(R+G+B);i++)
			{cin>>a[i];if(a[i]>max){max=a[i];max_index=i;}}

		for(j=0;j<M;j++)
		{
            if(max_index>=0 && max_index<=(R-1))
            {
                start=0;end=R-1;
            }
            else if(max_index>=R && max_index<=(R+G-1))
            {
                start=R;end=(R+G-1);
            }
            else if(max_index>=(R+G) && max_index<=(R+G+B-1))
            {
                start=R+G; end=R+G+B-1;
            }

            for(i=start;i<=end;i++)
                a[i]/=2;
            max=-1;
            for(i=0;i<(R+G+B);i++)
                if(a[i]>max)
                {
                    max=a[i];
                    max_index=i;
                }
        }
        cout<<max<<endl;
    }

return 0;
}



