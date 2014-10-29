#include<iostream>
using namespace std;

int main()
{
    int a,k,n,i,e_count,o_count,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        e_count=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                e_count++;
        }
        o_count=n-e_count;
        if(o_count>0 && k==0)
            cout<<"YES\n";
        else if(e_count==k)
            cout<<"YES\n";
        else if(e_count>k && k!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
