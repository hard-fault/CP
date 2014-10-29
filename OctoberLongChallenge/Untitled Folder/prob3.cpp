#include<bits/stdc++.h>
#define MOD 1000000009
using namespace std;

struct sort_pred {
    bool operator()(const std::pair<char,long long int> &left, const std::pair<char,long long int> &right) {
        return left.second < right.second;
    }
};
int main()
{
long long int t,i,j,k,l,m,n;
char ch;
vector < pair<char,long long int> > a;
cin>>t;
while(t--)
	{
	cin>>n>>m;
	for(i=0;i<m;i++)
		{
		cin>>ch>>k;
		a.push_back(make_pair(ch,k));
		}
	if(m==1){k=1;}
	else
	{
	k=1;
	sort(a.begin(), a.end(), sort_pred());
	for(i=0;i<(m-1);i++)
		{
		if((a[i].first)==(a[i+1].first))
			continue;
		k*=( abs ( (a[i].second) - (a[i+1].second) ) );
		}
	}
	cout<<k % MOD<<endl;
	a.clear();
	}
return 0;
}
