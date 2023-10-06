#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Nhap so co 2 chu so: ");scanf("%d",&a);
    b=a%10;
    c=a/10;
    if (a>=1 && a<=100)
        {
        switch (c)
            {
            case 1:
            printf("Muoi ");
            break;
            case 2:
            printf("Hai Muoi ");
            break;
            case 3:
            printf("Ba Muoi ");
            break;
            case 4:
            printf("Bon Muoi ");
            break;
            case 5:
            printf("Nam Muoi ");
            break;
            case 6:
            printf("Sau Muoi ");
            break;
            case 7:
            printf("Bay Muoi ");
            break;
            case 8:
            printf("Tam Muoi ");
            break;
            case 9:
            printf("Chin Muoi ");
            break;
            }
        switch (b)
            {
            case 1:
            printf("Mot ");
            break;
            case 2:
            printf("Hai ");
            break;
            case 3:
            printf("Ba ");
            break;
            case 4:
            printf("Bon ");
            break;
            case 5:
            if (c>0)
                {
                printf("Lam");
                }
            else
                {
                printf("Nam");
                }
            break;
            case 6:
            printf("Sau ");
            break;
            case 7:
            printf("Bay ");
            break;
            case 8:
            printf("Tam ");
            break;
            case 9:
            printf("Chin ");
            break;

            }

        }
}
