// C Programlama Telefeon Rehberi Projem


#include <stdio.h> 
#include <conio.h> 
#include <string.h>
#include <stdlib.h>//system() 
FILE *telDefteri;
struct kimlik {
	char ad[15];
	char soyad[15];
	char ceptel[11];
	char evtel[11];
	char istel[11];
	char eposta[30];
	char dtarihi[10];
}kisi,kimlik_dizi[BUFSIZ],kimlik_yedek[BUFSIZ];

void menuHazirla();
void KisiEkle();
void KisiListele();
void KisiAra();
void KisiGuncelle();
void KisiSil();
int main()
{
	system("color 0e");
	menuHazirla(); 
	system("pause"); 
	return 0; 
}
void menuHazirla()
{
	char sart='E';
do{ 
	system("CLS");
	printf("\n\n\n\t\t\t\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\t\t\t\t\t\t\t*                           *\n");
	printf("\t\t\t\t\t\t\t*                           *\n");
	printf("\t\t\t\t\t\t\t*      Telefon Rehberi      *\n");
	printf("\t\t\t\t\t\t\t*     1)Kisi Ekle           *\n");
	printf("\t\t\t\t\t\t\t*     2)Kisileri Listele    *\n");
	printf("\t\t\t\t\t\t\t*     3)Kisileri Ara        *\n");
	printf("\t\t\t\t\t\t\t*     4)Kisi Guncelle       *\n"); 
	printf("\t\t\t\t\t\t\t*     5)Kisi sil            *\n");
	printf("\t\t\t\t\t\t\t*     6)Rehberden Cikis     *\n");
	printf("\t\t\t\t\t\t\t*                           *\n");
	printf("\t\t\t\t\t\t\t*                           *\n");
	printf("\t\t\t\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		char sec=getch(); 
		printf("\n");
		if(sec == 49)	
			KisiEkle();
		else if(sec == 50)
			KisiListele();
		else if(sec == 51)
			KisiAra();
		else if(sec == 52)
			KisiGuncelle();
		else if(sec == 53)
			KisiSil();
		else if(sec == 54)
			exit(0); 
		else 
			printf("Hatali giris yaptiniz. Lutfen gecerli bir tusa basiniz."); 
		printf("\nDevam etmek icin bir tusa basiniz...");
		getch();

	}while(1);
}

void KisiEkle()
{
	int a=0;
	system("CLS");
	char kosul='E';
	if((telDefteri=fopen("telDefteri.txt","a")) == NULL) 
		printf("Dosya Acilamadi \n"); 
	for(;;)
	{
		printf("Ad giriniz : ");
		scanf("%s",kisi.ad);
		a=strlen(kisi.ad);
			for(int i=0;i<a;i++)
			{
				if(kisi.ad[i]>='0'&&kisi.ad[i]<='9')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}

		printf("Soyad giriniz : ");
		scanf("%s",kisi.soyad);
		a=strlen(kisi.soyad);
			for(int i=0;i<a;i++)
			{
				if(kisi.soyad[i]>='0'&&kisi.soyad[i]<='9')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Cep Tel. Numarasi giriniz : ");
		scanf("%s",kisi.ceptel);
		a=strlen(kisi.ceptel);
			for(int i=0;i<a;i++)
			{
				if((kisi.ceptel[i]>='a'&&kisi.ceptel[i]<='z') || (kisi.ceptel[i]>='A'&&kisi.ceptel[i]<='Z'))
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Ev Telefonu Numarasi girinz(max 10) :");
		scanf("%s",kisi.evtel);
		a=strlen(kisi.evtel);
			for(int i=0;i<a;i++)
			{
				if(kisi.evtel[i]>='a'&&kisi.evtel[i]<='z')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Is Telefonu giriniz(max 10) :");
		scanf("%s",kisi.istel);
		a=strlen(kisi.istel);
			for(int i=0;i<a;i++)
			{
				if(kisi.istel[i]>='a'&&kisi.istel[i]<='z')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("E-Postanizi girin(max 30) :");
		scanf("%s",kisi.eposta);
		printf("Dogum tarihinizi girin(max 10) :");
		scanf("%s",kisi.dtarihi);
		fprintf(telDefteri, "%s %s %s %s %s %s %s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
		printf("Devam etmek istiyormusunuz? (E\H)");
		scanf("%s",&kosul);
		if(kosul=='H'||kosul=='h')
		{
				system("CLS");
				fclose(telDefteri);
				main();
		}
		else
			continue;
	}
}
void KisiListele()
{
	int m=0;
	system("cls");
	telDefteri=fopen("telDefteri.txt","r");
	if (telDefteri==NULL)
		printf("Dosya Acilamadi \n");  
	else{
		while(fscanf(telDefteri,"%s%s%s%s%s%s%s",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi)!=EOF){
			m++;
			strcpy(kimlik_yedek[m].ad,kisi.ad);
			strcpy(kimlik_yedek[m].soyad,kisi.soyad);
			strcpy(kimlik_yedek[m].ceptel,kisi.ceptel);
			strcpy(kimlik_yedek[m].evtel,kisi.evtel);
			strcpy(kimlik_yedek[m].istel,kisi.istel);
			strcpy(kimlik_yedek[m].eposta,kisi.eposta);
			strcpy(kimlik_yedek[m].dtarihi,kisi.dtarihi);

			strcpy(kimlik_dizi[m].ad,kisi.ad);
			strcpy(kimlik_dizi[m].soyad,kisi.soyad);
			strcpy(kimlik_dizi[m].ceptel,kisi.ceptel);
			strcpy(kimlik_dizi[m].evtel,kisi.evtel);
			strcpy(kimlik_dizi[m].istel,kisi.istel);
			strcpy(kimlik_dizi[m].eposta,kisi.eposta);
			strcpy(kimlik_dizi[m].dtarihi,kisi.dtarihi);
		}
	}
	for(int j=0;j<=m;j++)
	{
		for(int i=0;i<=m-j-1;i++)
		{
			//strcmp fonksyonu string degerlerine gore 3 farkli durumu vardir.
			if(strcmp(kimlik_dizi[i].ad,kimlik_dizi[i+1].ad)>0)
			{
				//memcpy string kutuphanesinde tanimli struct kopyalama fonksyonudur.
				memcpy(&kimlik_yedek[i],&kimlik_dizi[i],sizeof(kimlik));
				memcpy(&kimlik_dizi[i],&kimlik_dizi[i+1],sizeof(kimlik));
				memcpy(&kimlik_dizi[i+1],&kimlik_yedek[i],sizeof(kimlik));
			}
		}
	}
	printf("\t  Adi\t\tSoyadi\t\Cep Telefonu\tEv Telefonu\tIs Telefonu\t\tE-Posta Adresi\t\tDogum Tarihi\n");
	printf("\t -------------------------------------------------------------------------------------------------------------------\n");
	for(int i=1;i<m+1;i++)		//Isim alfabe sirasina gore gosterim
	{
		
		printf("%15s\t%15s\t%11s\t%11s\t%11s\t%30s\t%10s\n",kimlik_dizi[i].ad,kimlik_dizi[i].soyad,kimlik_dizi[i].ceptel,kimlik_dizi[i].evtel,kimlik_dizi[i].istel,kimlik_dizi[i].eposta,kimlik_dizi[i].dtarihi);
		printf("\t -------------------------------------------------------------------------------------------------------------------\n");
	}	
	fclose(telDefteri);
}

	/*fscanf(telDefteri,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi); 
	m++;*/


void KisiAra()
{
	char aranacakAd[30];
	char aranacakSoyad[30];
	system("cls");
	printf("Aranacak kisinin adini giriniz : ");
	scanf("%s", aranacakAd);
	printf("Aranacak kisinin soyadini giriniz : ");
	scanf("%s", aranacakSoyad);
	if ((telDefteri=fopen("telDefteri.txt","r"))==NULL)
		printf("Dosya Acilamadi \n");
	while(!feof(telDefteri))
	{
		fscanf(telDefteri, "%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
		if(!strcmp(aranacakAd,kisi.ad)&&!strcmp(aranacakSoyad,kisi.soyad)) 
			printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\n", kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
	} 
	fclose(telDefteri);
}

void KisiGuncelle()
{
	int a=0;
	char aranacakAd[30];
	char aranacakSoyad[30];
	system("cls");
	printf("Degistirmek istediginiz kayidin adini giriniz : ");
	scanf("%s", aranacakAd);
	printf("Degistirmek istediginiz kayidin soyadini giriniz : ");
	scanf("%s", aranacakSoyad);
	FILE *geciciTelDefteri; 
	if ((telDefteri=fopen("telDefteri.txt","r"))==NULL)
		printf("Dosya Acilamadi \n");    
	if ((geciciTelDefteri=fopen("geciciTelDefteri.txt","w+"))==NULL) 
		printf("Dosya Acilamadi \n");  
	while(!feof(telDefteri))
	{
		fscanf(telDefteri, "%s%s%s%s%s%s%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
		if(!strcmp(aranacakAd,kisi.ad)&&!strcmp(aranacakSoyad,kisi.soyad))
			
		{    
			printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\n", kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
			printf("\nYeni isim giriniz : ");
			scanf("%s",kisi.ad);
			a=strlen(kisi.ad);
			for(int i=0;i<a;i++)
			{
				if(kisi.ad[i]>='0'&&kisi.ad[i]<='9')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
			printf("Soyad giriniz : ");
		scanf("%s",kisi.soyad);
		a=strlen(kisi.soyad);
			for(int i=0;i<a;i++)
			{
				if(kisi.soyad[i]>='0'&&kisi.soyad[i]<='9')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Cep Tel. Numarasi giriniz : ");
		scanf("%s",kisi.ceptel);
		a=strlen(kisi.ceptel);
			for(int i=0;i<a;i++)
			{
				if((kisi.ceptel[i]>='a'&&kisi.ceptel[i]<='z') || (kisi.ceptel[i]>='A'&&kisi.ceptel[i]<='Z'))
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Ev Telefonu Numarasi girinz(max 10) :");
		scanf("%s",kisi.evtel);
		a=strlen(kisi.evtel);
			for(int i=0;i<a;i++)
			{
				if(kisi.evtel[i]>='a'&&kisi.evtel[i]<='z')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("Is Telefonu giriniz(max 10) :");
		scanf("%s",kisi.istel);
		a=strlen(kisi.istel);
			for(int i=0;i<a;i++)
			{
				if(kisi.istel[i]>='a'&&kisi.istel[i]<='z')
				{	
					printf("Hatali Giris!  Lutfen ekleme islemini yeniden giriniz...");
					getch();
					main();
				}
				else
					break;
			}
		printf("E-Postanizi girin(max 30) :");
		scanf("%s",kisi.eposta);
		printf("Dogum tarihinizi girin(max 10) :");
		scanf("%s",kisi.dtarihi);
			fprintf(geciciTelDefteri, "%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi); 
		}
		else
			fprintf(geciciTelDefteri, "%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi); 
	}
	fclose(telDefteri);
	fclose(geciciTelDefteri);
	remove ("telDefteri.txt"); 
	rename ("geciciTelDefteri.txt" , "telDefteri.txt"); 
}

void KisiSil()
{
	char sart='E';
	char aranacakAd[30];
	char aranacakSoyad[30];
	system("cls");
	printf("Silmek istediginiz kayidin adini giriniz : ");
	scanf("%s", aranacakAd);
	printf("Silmek istediginiz kayidin soyadini giriniz : ");
	scanf("%s", aranacakSoyad);	
	FILE *geciciTelDefteri;
	if ((telDefteri=fopen("telDefteri.txt","r"))==NULL)
		printf("Dosya Acilamadi \n");    
	if ((geciciTelDefteri=fopen("geciciTelDefteri.txt","w+"))==NULL)
		printf("Dosya Acilamadi \n");  
	while(!feof(telDefteri))
	{
		fscanf(telDefteri, "%s%s%s%s%s%s%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
		if(!strcmp(aranacakAd,kisi.ad)&&!strcmp(aranacakSoyad,kisi.soyad))
		{    
			printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\n", kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
		}
		else
			fprintf(geciciTelDefteri, "%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisi.ad,kisi.soyad,kisi.ceptel,kisi.evtel,kisi.istel,kisi.eposta,kisi.dtarihi);
	}
	fclose(telDefteri);
	fclose(geciciTelDefteri);
	remove ("telDefteri.txt");
	rename ("geciciTelDefteri.txt" , "telDefteri.txt");
}
