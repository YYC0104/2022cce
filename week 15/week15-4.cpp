#include <stdio.h>

int main()
{
    char line[3000];

    printf("�п�J�ܪ��ܪ����r��A���n���Ů�A���� Enter\n");

    scanf("%s", line);
    printf("�����X�Ӧr���O?\n");
    printf("%s\n", line);
    int count=0;
    for(int i=0; line[i]!=0; i++)
    {
        count++;
    }
    printf("%d\n", count);
}
