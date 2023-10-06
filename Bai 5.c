#include <stdio.h>

int main()
{
    int so;
    scanf("%d",&so);
     if(so%10<=1&&so%10>0){
         if(so==1)printf("mot");
         else if(so==2)printf("hai");
         else if(so==3)printf("ba");
         else if(so==4)printf("bon");
         else if(so==5)printf("nam");
         else if(so==6)printf("sau");
         else if(so==7)printf("bay");
         else if(so==8)printf("tam");
         else if(so==9)printf("chin");}
     else{
         if(so/10==1)printf("mot");
         else if(so/10==2)printf("hai");
         else if(so/10==3)printf("ba");
         else if(so/10==4)printf("bon");
         else if(so/10==5)printf("nam");
         else if(so/10==6)printf("sau");
         else if(so/10==7)printf("bay");
         else if(so/10==8)printf("tam");
         else if(so/10==9)printf("chin");
         printf(" muoi ");
         if(so%10==1)printf("mot");
         else if(so%10==2)printf("hai");
         else if(so%10==3)printf("ba");
         else if(so%10==4)printf("bon");
         else if(so%10==5)printf("nam");
         else if(so%10==6)printf("sau");
         else if(so%10==7)printf("bay");
         else if(so%10==8)printf("tam");
         else if(so%10==9)printf("chin");
     }

}
