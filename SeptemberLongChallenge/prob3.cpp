#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

unsigned long long int a[100000];
int primeFactors(int n)
{
    int k=0;
    while (n%2 == 0)
    {
        a[k++]=2;
        n = n/2;
    }

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            a[k++]=i;
            n = n/i;
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        a[k++]=n;
    return k;
}

int main()
{
    int t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=primeFactors(n);
        cout<<m<<endl;
        for(i=0;i<m;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
