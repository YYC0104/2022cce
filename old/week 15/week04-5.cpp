#include <stdio.h>

int main()
{
    int N=3;
    for(int i=0; i<N; i++)
    {
        printf("出現 i:%d\n", i);
    }

    for(int i=0; i<=N; i++)
    {
        printf("接下來 i:%d\n", i);
    }
}
