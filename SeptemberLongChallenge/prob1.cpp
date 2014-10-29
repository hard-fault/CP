#include<cstdio>
#include<iostream>
#include<string>
#define MOD 1000000007
using namespace std;

long long int t,i,node,n;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        node=1LL;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='l')
                    node=node*2;
                else if(s[i]=='r')
                    node=(node*2)+2;
            }
            else
            {
                if(s[i]=='l')
                    node=(node*2)-1;
                else
                    node=(node*2)+1;
            }
            node=(node>MOD)?node%MOD:node;
        }

        cout<<node<<endl;

    }
    return 0;
}
