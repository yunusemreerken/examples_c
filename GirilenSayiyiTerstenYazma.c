#include"stdio.h"
#include"conio.h"
void main()
{
int sayi,birler,gec=0;
printf("istedigin basamakta sayi girin:");
scanf("%d",&sayi);

while(sayi>=1)

{
birler=sayi%10;
gec=gec*10+birler;
sayi=sayi/10;
}
printf("%d",gec);
getch();
}
