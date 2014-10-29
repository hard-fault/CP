/*Alice and Bob, both have to drink water. But they both don't want to go, so they will play a game to decide who will fetch water for both of them. Alice will choose a number randomly between 1 and N (both inclusive) and Bob will choose a number randomly between 1 and M (both inclusive). Both will write their numbers on a slip of paper. If sum of numbers choosen by both is odd, then Alice will go, else Bob will go.

What is probability that Alice will go?
Input

First line contains, T, the number of testcases. Each testcase consists of N and M in one line, separated by a space.
Output

For each test case, output a single line containing probability as an irreducible fraction.
Constraints

1 ≤ T ≤ 105
1 ≤ N,M ≤ 109
Example

Input:
3
1 1
1 2
2 3
Output:
0/1
1/2
1/2*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    unsigned long long int m,n,p,q,product;

    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        product=m*n;
        if((product%2)==0)
        {
            p=1;q=2;
        }
        else
        {
            p=(product/2);
            q=product;
        }
        cout<<p<<"/"<<q<<endl;

    }
    return 0;

}
