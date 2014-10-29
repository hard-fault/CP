#include<iostream>
using namespace std;

int main()
{
    int t,a[100],sum,n,i,j,temp,count;

    cin>>t;
    while(t--)
    {
    cin>>sum;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    count=0;
    for(i=0;i<n;i++)
    {
        temp=a[i];if(temp==sum)count++;
        for(j=i+1;j<n;j++)
        {
            temp+=a[j];
            if(temp>sum)
                temp=a[j]+a[i];
            if(temp==sum)
            {
                count++;
                temp=a[i];
            }
        }
    }
    cout<<count<<endl;
    }

}
