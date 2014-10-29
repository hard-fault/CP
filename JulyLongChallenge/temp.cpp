#include<iostream>
using namespace std;

int func(int &x)
{
    x=12;
    return 10;
}
int main()
{
    int a=10,b=20,c=30;
    b=func(a);
    cout<<a<<"  "<<b<<endl;
}
