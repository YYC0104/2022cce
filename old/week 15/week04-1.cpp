#include <stdio.h>

int main()
{
    printf("請輸入西元年分:");

    int n;
    scanf("%d", &n);

    if (n%400==0) printf("閏年");
    else if (n%100==0) printf("平年/普通年");
    else if (n%4==0) printf("閏年");
    else printf("平年/普通年");
}
