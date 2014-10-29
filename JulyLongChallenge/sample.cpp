#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int myfind(vector<pair<int,int> >,int);
int main()
{
    vector<pair<int,int> > a(10);
    pair<int,int> b;
    int k=10;
    for(int i=0;i<10;i++)
        {b=make_pair(k--,i+1);a[i]=b;}
    sort(a.begin(),a.end());
    for(int i=0;i<10;i++)
        cout<<a[i].first<<" "<<a[i].second<<endl;
    int key;
    cin>>key;
    int pos=myfind(a,key);
    cout<<endl<<pos<<endl;
}
int myfind(vector<pair<int,int> > a,int key)
{

    for(int i=0;i<10;i++)
        if(key==a[i].first)
           return i;
    return -1;
}
