#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int myfind(vector<pair<int,int> >,int);
int main()
{
    int temp,i,l,r;
    vector<pair<int,int> > a(10);
    pair<int,int> b;
    cin>>n>>k>>p;
    for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            b=make_pair(i+1,temp);a[i]=b;
        }
    sort(a.begin(),a.end());

    while(p--)
    {
        scanf("%d %d",&l,&r);
        l_pos=myfind_index(a,l);r_pos=myfind_index(a,r);
        l_pos=myfind_index(a,l);r_pos=myfind_index(a,r);

    }
    int key;
    cin>>key;
    int pos=myfind(a,key);
    cout<<endl<<pos<<endl;
}
int myfind_index(vector<pair<int,int> > a,int key)
{

    for(int i=0;i<10;i++)
        if(key==a[i].first)
           return i;
    return -1;
}
int myfind_value(vector<pair<int,int> > a,int key)
{

    for(int i=0;i<10;i++)
        if(key==a[i].second)
           return i;
    return -1;
}
