#include <stdio.h>
int main()
{
    char a;
    printf("*************************\n");
    printf("-E\n");
    printf("-V\n");
    printf("-G\n");
    printf("-A\n");
    printf("-F\n");
    printf("Hay nhap diem theo ky tu: ");scanf("%c",&a);
    switch (a)
    {
        case 'E':
            printf("Excellent");
            break;
        case 'V':
            printf("Very good");
            break;
        case 'G':
            printf("Good");
            break;
        case 'A':
            printf("Average");
            break;
        case 'F':
            printf("Fail");
            break;
        case 'e':
            printf("Excellent");
            break;
        case 'v':
            printf("Very good");
            break;
        case 'g':
            printf("Good");
            break;
        case 'a':
            printf("Average");
            break;
        case 'f':
            printf("Fail");
            break;
    }

}
