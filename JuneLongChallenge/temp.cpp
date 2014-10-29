#include<iostream>
#include<cstdio>
using namespace std;

/*void foo(int&);
    int main()
    {
        int i = 10;
        foo(i);
        printf("%d\n", i);
    }
    void foo(int &p)
    {
        p++;
        printf("%d\n", p);
    }*/
 /*void foo(float *);
    int main()
    {
        int i = 10, *p = &i;
        foo(&i);
    }
    void foo(float *p)
    {
        printf("%d\n", *p);
    }*/
 /*void foo(float *);
    int main()
    {
        int i = 10, *p = &i;
        foo(&i);
    }
    void foo(float *p)
    {
        printf("%f\n", *p);
    }*/
  /*int main()
    {
        int i = 97, *p = &i;
        foo(&i);
        printf("%d ", *p);
    }
    void foo(int *p)
    {
        int j = 2;
        p = &j;
        printf("%d ", *p);
    }*/
    /*void foo(int **p);
    int main()
    {
        int i = 11;
        int *p = &i;
        foo(&p);
        printf("%d ", *p);
    }
    void foo(int **p)
    {
        int j = 10;
        *p = &j;
        printf("%d ", **p);
    }*/
    /*void foo(int **const p);
 int main()
    {
        int i = 10;
        int *p = &i;
        foo(&p);
        printf("%d ", *p);
        printf("%d ", *p);
    }
    void foo(int *const *p)
    {
        int j = 11;
        *p = &j;
        printf("%d ", **p);
    }*/
int main()
{
    char s[]={'a','A','c'},*p;
    p=s;
    ++*p;
    cout<<*p;
    cout<<endl<<2[s];
}
/*void modify(int *val)
{
    *val += 10;
}
int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
        printf("%-3d", ar[i]);
    printf("\nModify:\n");
    for (i = 0; i < 5; i++)
    {
        modify(&ar[i]);
        printf("%-3d", ar[i]);
    }
    printf("\n");
}*/
