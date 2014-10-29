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
int w[101][101],M,N,i,j,str=0,till=0,f=0;
void getMaxDiagonal(int n)
{
    int sum=0;
    for(int i=0;i<M-n+1;i++)
    for(int j=0;j<N-n+1;j++)
    {
        // printf("i=%d j=%d\n",i,j);
         sum=0;
        int l=i,k=j;
        while(k<j+n)
        {
            l++;
            k++;
            sum+=w[l][k];
           // cout<<w[l][k]<<" = w[l][k]\n";
        }
         l=i+n,k=j+n;
        while(l>i)
        {
            l--;
            k--;
            sum+=w[l][k];
        }
   // cout<<sum<<" = sum\n";
//        for(int l=i;l<i+n;l++)
//        for(int k=j;k<j+n;k++)
//        {
//            //printf("i=%d j==%d l=%d k=%d  w[l][k] = %d \n",i,j,l,k,w[l][k]);
//            if(l==k)
//            sum+=w[l][k];
//        }
        //cout<<sum<<" = sum\n";
        if(f)
        {
            if(sum>str)
            str=sum;
        }
        else
        {
            str = sum;
            f=1;
        }
    }
    //cout<<n<<" done\n";
    if(n>1)
        getMaxDiagonal(n-1);

       // return
}
int main()
{
    FST;
    freopen("in.txt","r",stdin);
    INPT
    {
        str=f=0;
        cin>>M>>N;
        for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>w[i][j];

//        for(int i=0;i<M;i++)
//        {
//            for(int j=0;j<N;j++)
//            cout<<w[i][j]<<" ";
//            cout<<endl;}
            if(M>N)
                till=N;
            else
                till=M;
        getMaxDiagonal(till);
        cout<<str<<endl;
    }
    return 0;
}

