#include<stdio.h>
#include<string.h>

int t,i,node,n;
char s[100005];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        n=strlen(s);
        node=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='l')
            {
                if(node%2==1)
                    node=node*2;
                else
                    node=node*2-1;
            }
            else if(s[i]=='r')
            {
                if(node%2==1)
                    node=node*2+2;
                else
                    node=node*2+1;
            }
        }
        printf("%d\n",node%(1000000007));

    }
    return 0;
}
