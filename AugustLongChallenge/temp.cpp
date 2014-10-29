#include<iostream>
using namespace std;

class A
{
    public:
    int a;
};

class B : public A
{
    public:
    int a;
};

void fn(A z)
{
    cout<<z.a<<endl;
}
/*void fn(B z)
{
    cout<<z.a<<endl;
}*/

int main()
{
    A ob_a;
    B ob_b;
    ob_b.a=20;
    ob_a.a=10;
    fn(ob_a);
    fn(ob_b);
    return 0;
}

