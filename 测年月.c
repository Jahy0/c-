#include<stdio.h>
int main()
{
    int year, month;
    printf("��������£��ÿո�ָ�����\n");
    scanf("%d %d", &year, &month);
    switch (month)
    {
    case 2:if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("29�죡\n");
    else
        printf("28�죡\n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:printf("30�죡\n"); break;
    default:printf("31�죡\n"); break;
    }
    return 0;
}

