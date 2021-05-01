#include <stdio.h>
#include <stdlib.h>

// Global Deðiþkenler 
int ay,karar;
int bolgeDegerleri(int bolge);
int liste(float ortalama);
static float sicaklik,ortalama;

int main(){
	
	// Lokal Deðiþken 1
	int bolge;
	printf("Bulundugunuz Bolgede Hava Durumuna Gore Fide Ekim Zamani Hesaplama Programi\n");	
	printf("Yasadiginiz bolgeyi giriniz!\n");
	printf("1)Akdeniz\n2)Ege\n3)Marmara\n4)IcAnadolu\n5)Karadeniz\n6)DoguAnadolu\n7)GuneyAnadolu\n");
	printf("Bolge:");
	scanf("%d", &bolge);
	bolgeDegerleri(bolge);
	printf("Gerekli Bilgiler Ulastirildi\n");
	printf("Uygun Fide Listelerini Goruntulemek Icin 2'ye basiniz\n");
	scanf("%d", &karar);
	if (karar == 2){
		liste(ortalama);
	}
	else{
		printf("Gorusmek Uzere\n");
		system("exit");		
	} 
}
int bolgeDegerleri (int bolge){
	
	switch (bolge){
		case 1:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Deger Ustunde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.5;
			if (ortalama >= 75){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");			
			break;
		}
		case 2:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Deger Ustunde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 1;
			if (ortalama >= 75){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");
			break;
		}
		case 3:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Degerde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.5;
			if (ortalama >= 100){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");
			break;
		}
		case 4:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Degerde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.25;
			if (ortalama >= 60){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");
			break;
		}
		case 5:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Deger Ustunde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.15;
			if (ortalama >= 100){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 99 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");
			break;
		}
		case 6:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Deger Ustunde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.5;
			if (ortalama >= 50){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok soguk\n");
			break;
		}
		case 7:{
			printf("Bulundugunuz Bolgede Sicakliklar Ortalama Deger Ustunde!\n");
			printf("Son 1 Haftanin Sicaklik Ortalamasini Giriniz!\n");
			scanf("%f", &sicaklik);
			printf("Hangi ayda oldugunuzu giriniz!\n(Sayi olarak)\n");
			scanf("%d", &ay);
			ortalama = (sicaklik * (13 - ay)) * 0.5;
			if (ortalama >= 50){
				printf("Dikim Icin 1-2 ay beklenmeli\n");
				printf("Hava cok sicak\n");
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Dikim Icin Uygun Zaman\n");
			}else printf("Havalar Dikim Icin Cok Soguk\n");
			break;
		}
	}
	return ortalama;
}
int liste (float ortalama){
	int listeKarar;
	do {
		printf("Uygun Fide Listesini Goruntulemek Icin Ortalama Degerleriniz Kullanilacaktir\n");
		printf("Bu degerler disinda bir goruntuleme yapilamamaktadir\n");
		printf("Eski degerlerle devam etmek icin 1 'e basiniz\n");
		printf("Cikis Yapmak Icin 0'a basiniz!\n");
		scanf("%d", &listeKarar);
		if (listeKarar == 1){
			if (ortalama >= 50){
				printf("Bu degerlerde dikilebilecek bitki bulunamamaktadir\n");
				printf("Devam Etmek Icin 1' e basiniz\n");
				scanf("%d", &listeKarar);				
			}
			else if (ortalama < 50 && ortalama > 25){
				printf("Limon\nPortakal\nMandalina\nAyva\nKiraz\nErik\n");
				printf("Devam Etmek Icin 1' e basiniz\n");
				scanf("%d", &listeKarar);
			}else{
			printf("Bu degerlerde dikilebilecek bitki bulunamamaktadir\n");	
			printf("Devam Etmek Icin 1' e basiniz\n");
			scanf("%d", &listeKarar);
			} 
		}		
		else system("exit");
		
	}while (listeKarar != 0);
}
