#include <stdio.h>

int sum(int a, int b);
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int ans=sum(2, 3);
    printf("ans=%d", ans);
}
