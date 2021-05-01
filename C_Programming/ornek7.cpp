#include <stdio.h>
#include <stdlib.h>

int main(){
	
	void anaEkran(), fotografEkrani(), cerceve();
	anaEkran();
	
	printf("Tekrar Gorusmek Uzere");
}
void anaEkran(){
	
	void fotografEkrani();
	void cerceve();	
	int karar;
	printf("Magazamiza HosGeldiniz!\n");
	printf("Fotograflarinizi Bastirmak Icin 1\n");
	printf("Cerceve Sayfasini Incelemek Icin 2\n");
	printf("Cikis Yapmak Icin 0 a basiniz\n");	
	do {	
	scanf("%d", &karar);
	if(karar == 1){
		fotografEkrani();
	}
	else if(karar ==2){
		cerceve();
	}
	else {		
	printf("Yanlis Girdi\n");
	printf("Tekrar Deneyiniz\n");
	}
	
	}while(karar != 0);
}
void fotografEkrani(){
	void cerceve();
	int karar;
	printf("Fotograflarinizin Boyutunu Biliyorsaniz 1 e basabilirsiniz\n");
	printf("Fiyatlarimiz Her Cerceve Icin Degisiklik Göstermektedir\n");
	printf("Fotograf Yukleme Ekranindan Cikis Icin 0 a basiniz\n");
	do {
	scanf("%d", &karar);
	if(karar ==1){
		printf("Yonlendiriliyorsunuz\n");
		cerceve();
		system("exit");
	}
	else if(karar !=1){
		printf("Yanlis Girdi\n");
		printf("Tekrar Deneyiniz\n");
	}	
	}while(karar != 0);
}
void toplam(float sonToplam){
	
	float kdv =3;	
	printf("%f", sonToplam);	
	
	
}
void cerceve(){	
	float deger;
	int karar;
	printf("1)\t15x20 Icin Fiyat 35tl\n");
	printf("2)\t10x10 Icin Fiyat 20tl\n");
	printf("3)\t15x15 Icin Fiyat 25tl\n");
	printf("4)\t30x30 Icin Fiyat 50tl\n");
	printf("Karariniz Bekleniyor\n");
	printf("Cikis Icin 0\n");
	scanf("%d", &karar);
	if (karar == 0){
		system("exit");
	}else if (karar == 1){
		float sonToplam = 35 * 3;
		toplam(sonToplam);
		fflush(stdin);
		system("exit");
	}
	else if (karar == 2){
		float sonToplam = 20 * 3;
		toplam(sonToplam);
		fflush(stdin);
		system("exit");
	}
	else if (karar == 3){
		float sonToplam = 25 * 3;
		toplam(sonToplam);
		fflush(stdin);
		system("exit");
	}
	else if (karar == 4){
		float sonToplam = 50 * 3;
		toplam(sonToplam);
		fflush(stdin);
		system("exit");
	}
}

