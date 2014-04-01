//Kütüphanelerimizi tanımladık
#include <stdio.h>//Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphanedir
#include <conio.h>//Bu kütaphaneyi getch(); kodu için ekledim
#include<string.h>//strcmp yi kullanmak için bu kutuphaneyi cagırdım
#include<stdlib.h>//exit() i kullanmak için bu kutuphaneyi cagırdım
#include <Windows.h>// Bu kütüphaneyi ise ekrandaki yazıları silmemize yararyan system("cls"); kodu için ekledim
void main()
{
	int kuladi,sifre;//Giriş yapmak için kullanıcı adı ve şifresini tanımladım
	int anapara=5000,anamenu,ekleme,cekme,gonderme,cikis,sec,basadön;//Hesapta işlem yapmak için tanımlanan ifadeler

	do//do-while döngümüze başlıyorum
	{   
		printf("Kuladi: ");//
		scanf("%d", &kuladi);//  Giriş panelim.
		printf("Sifre: ");//
		scanf("%d", &sifre);//
		system("cls"); // O anda ekranda ne varsa silen kod

		if(kuladi==0 && sifre==1)//Eğer kullanıcı adı ve şifre doğruysa ekrana "Başarı ile giriş yaptınız" yazacaktır.
			printf("Basari ile giris yaptiniz.\n");
		else // Eğer  kullanıcı adı ve şifre doğru değilse ekrana "Hatalı giriş yaptınız!" yazacaktır.

			printf("Hatali giris yaptiniz! \n");
	}
	while(kuladi!=0 || sifre!=1);// Döngünün sürekli olma durumu
	
	do//Tekrar farklı bir do-while döngümüze başlıyorum.
	{
		printf("\n\n\nHesabiniza Hos geldiniz.");
		printf("\n\n\n1-Bakiyeniz");
		printf("\n\n\n2-Para ekleme");
		printf("\n\n\n3-Para cekme");
		printf("\n\n\n4-Baska hesaba para gonderme");
		printf("\n\n\n5-Hesaptan cikis");
		printf("\n\n\nYapmak istediginiz islemi secin (1/2/3/4/5): ");
		scanf("%d", &sec);// Girilen değeri önceden tanımlı sec'e atar.
		switch(sec)//Alttaki case'leri sec olarak bizlere sunar
		{
			
		case 1: // case == 1 olma durumu
			int menu;
			system("cls");//O anda ekranda ne varsa silen kod
			printf("\nBakiyeniz :%d TL\n\n",anapara);//Hesapta bulunan parayı gösterir
            printf("Devam etmek icin bir tusa basiniz!");	
			getch();
			system("cls");//O anda ekranda ne varsa silen kod
			break;
		case 2: // case == 2 olma durumu
			system("cls");//O anda ekranda ne varsa silen kod
			printf("\nBakiyeniz :%d\n\n",anapara);//Hesapta bulunan parayı gösterir.
			printf("\nYatirmak istediginiz para miktarini girin lutfen =");
			scanf("%d",&ekleme);
			anapara+=ekleme;//Yatirmak istedigimiz parayi anaparaya ekler.
			printf("\nIsleminiz basari ile gerceklesmistir.\n\nIslemden sonra hesabinizdaki para =%d TL\n\n\n\n",anapara);//Hesapta bulunan parayı gösterir.
			printf("Devam etmek icin bir tusa basiniz!");	
			getch();
			system("cls");//O anda ekranda ne varsa silen kod

			break;
		case 3: // case 3 olma durumu
			system("cls");//O anda ekranda ne varsa silen kod
			printf("\n\nHesabimdaki Para = %d\n\n",anapara);//Hesapta bulunan parayı gösterir.
			printf("Cekmek istediginiz tutari giriniz: ");
			scanf("%d",&cekme);
			if(anapara < cekme)//Eğer çekilen para anaparadan fazlaysa çekme işlemini engeller.
			{
				printf("\nLimitiniz Yeterli Degil !");
				printf("\nDevam etmek icin  bir tusa basiniz !");	
				getch();
			}
			else //Eğer çekilen para anaparadan fazla değil ise çekme işlemi gerçekleşir.
			{
				anapara-=cekme;//Çekeceğimiz miktarı anaparadan eksiltir
				printf("\nIsleminiz basari ile gerceklesmistir.\n\nIslemden sonra hesabinizdaki para =%d TL\n\n\n\n",anapara);//Hesapta en son bulunan parayı gösterir.
			}
			getch();
			system("cls");//O anda ekranda ne varsa silen kod
			
			break;
		case 4: // case == 4 olma durumu
			char havaleyialankisi[50];
			system("cls");//O anda ekranda ne varsa silen kod
			printf("\nHavaleyi alacak kisinin adi = ");
			scanf("%s",&havaleyialankisi);
			printf("\nGodermek istediginiz miktar =");
			scanf("%d",&gonderme);

			
			if(strcmp(havaleyialankisi,"yusuf")==0)//Havaleyi alanla tırnak içinde yazılan kişinin aynı olup olmadığını kontrol ettirdim.
			{
			if(gonderme>anapara)//Eğer gönderceğimiz para anaparadan fazla ise Limitiniz Yeterli Değil yazar.
				{ 
					printf("Limitiniz Yeterli Degil !");
					 }
			else

			 anapara-=gonderme; // Anaparadan havale edilen parayı çıkartır.
			 printf("\nIsleminiz basari ile gerceklesmistir.\n\nIslemden sonra hesabinizdaki para =%d TL\n\n\n\n",anapara);//Hesapta bulunan parayı gösterir.
			 printf("\n\nDevam etmek icin bir tusa basiniz!");
			 }
			
			else
			{
			     printf("\n\nBoyle bir hesap bulunamamaktadir!!!");
			}
			getch();
			system("cls");//O anda ekranda ne varsa silen kod

			break;
		case 5: //  case == 5 olma durumu
			system("cls"); // O anda ekranda ne varsa silen kod
			printf("Basari ile cikis yaptiniz");
			getch();
			exit(0);//Ekrandan çıkmaya yarayan kod.
			break;
		default: //1,2,3,4,5 olmama durumu
			printf("1, 2, 3, 4, 5 sayilarindan birini giriniz...\n");

			break;
		}
	}
	while(sec=1,2,3,4,5);//DÖngümüzün geçerli olma durumu. Yani sec değeri 1,2,3,4,5 ten birine eşit olduğu sürece devam ettir.
	getch();//Programın kapanabilme ihtimaline karşı ekledim.	
}
