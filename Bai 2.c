#include <stdio.h>
int main()
{
    int a;
    printf("Hay nhap ngay trong tuan tu 1-7: ");scanf("%d",&a);
    switch (a)
        {
        case 1:
        printf("Hom nay la thu hai");
        break;
        case 2:
        printf("Hom nay la thu ba");
        break;
        case 3:
        printf("Hom nay la thu tu");
        break;
        case 4:
        printf("Hom nay la thu nam");
        break;
        case 5:
        printf("Hom nay la thu sau");
        break;
        case 6:
        printf("Hom nay la thu bay");
        break;
        case 7:
        printf("Hom nay la chu nhat");
        break;
        default:
        printf("Nhap khong dung");
        }
}
