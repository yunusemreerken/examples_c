#include"stdio.h"
#include"conio.h"
void Hesaplama(int r,float *a,float *b)
{
*a=3.14*r*r;
*b=2*3.14*r;
}
void main()
{
int yaricap;
float alan,cevre;
printf("\nLutfen yaricapi girin:");
scanf("%d",&yaricap);
Hesaplama(yaricap,&alan,&cevre);
printf("Alan=%f", alan);
printf("\nCevre=%f",cevre);
getch();

}
