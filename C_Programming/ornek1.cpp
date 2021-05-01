#include <stdio.h>
#include <stdlib.h>

int karar,deger,eder,yil,hasar,kasko,girdi;
float hesaplama;
char tc[100];
int fiyat(int deger);
int kaskolama(int girdi);
char isim[100];
char soyisim[100];

int main(){
	
	do{
		printf("Kasko Sirketimize Hos Geldiniz!\n");
		printf("Aracinizin Ozelliklerine Gore Kasko Icin 1\n");
		printf("Cikis Yapmak Icin 0\n");
		printf("Karar:");
		scanf("%d", &karar);
		if (karar == 1){
			fiyat(deger);
			printf("%2.f\n", hesaplama);
			printf("Kaskolamaya Gecmek Icin 1'e basiniz\n");
			scanf("%d", &kasko);
			if (kasko == 1){
				kaskolama(girdi);
			}
			else system("exit");
		}else karar = 0;
	}while (karar != 0);
}
int fiyat (int deger){
	
	printf("Aracinizin 2.El Fiyatini Giriniz!\n");
	scanf("%d", &eder);
	fflush(stdin);
	printf("Aracinizin Trafige Cikis Yilini Giriniz!\n");
	scanf("%d", &yil);
	fflush(stdin);
	printf("Aracinizin Tramer Hasarini Girin Yoksa 1 Giriniz!\n");
	scanf("%d", &hasar);
	fflush(stdin);
	hesaplama = ((2021 - yil) * eder) / hasar ;
	
	return hesaplama;
}
int kaskolama (int girdi){
	
	do {
	
	hesaplama = hesaplama / 10;
	printf("Ucret: %2.f\n", hesaplama);
	printf("Adinizi Soyadinizi Giriniz!\n");
	scanf("%s %s", &isim, &soyisim);
	printf("TC nizi Giriniz!\n");
	scanf("%s", &tc);
	printf("%s %s %s : %2.f\n" , isim , soyisim , tc , hesaplama);
	printf("Onaylamak Icin 1' e basiniz!\n");
	printf("Cikis yapmak Icin 0' a basiniz!\n");
	scanf("%d", &karar);
	if (karar == 1){
		printf("Belgeleriniz Onaylandi Lutfen SMS Ile En Yakin Subeye Basvurunuz!\n");
		printf("Ana Sayfaya Yonlendiriliyorsunuz!\n");
		main();
	}
	else printf("Cikis Yapildi\n");
	}while (karar != 0);
}
