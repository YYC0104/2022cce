#include <stdio.h>

int main()
{
    printf("½Ð¿é¤J¦è¤¸¦~¤À:");

    int n;
    scanf("%d", &n);

    if (n%400==0) printf("¶|¦~");
    else if (n%100==0) printf("¥­¦~/´¶³q¦~");
    else if (n%4==0) printf("¶|¦~");
    else printf("¥­¦~/´¶³q¦~");
}
