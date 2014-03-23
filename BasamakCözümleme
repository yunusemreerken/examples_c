#include<stdio.h> //printf ve scanf'i kullanmak için stdio.h kütüphanesini çağırdık.
#include<conio.h> //getch kullanmak için conio.h kütüphanesini çağırdık.
void main()
{
int birlik,onluk,yuzluk,binlik,geckalan1,geckalan2,sayi;//Aşağıda kullanacaklarımızı tanımlıyoruz.
printf("Basamak degerlerini istediginiz 4 haneli bir tamsayi yaziniz :");
scanf_s("%d",&sayi);

binlik=sayi/1000;
geckalan1=sayi%1000; //"geckalan1" yüzlük değere geçmek için kullandığımız karekterdir.
yuzluk=geckalan1/100;
geckalan2=geckalan1%100; //"geckalan2" onluk değere geçmek için kullandığımız karekterdir.
onluk=geckalan2/10;
birlik=geckalan2%10;

printf("\n\nCozumlenecek sayi = %d",sayi);
printf("\n\nYazilan sayi %d",sayi);
printf("\n\n%d tane binlik sayi",binlik);
printf("\n\n%d tane yuzluk sayi",yuzluk);
printf("\n\n%d tane onluk sayi",onluk);
printf("\n\n%d tane birlik sayi vardir.",birlik);

_getch();//programın kapanmaması için girdiğimiz komut.
