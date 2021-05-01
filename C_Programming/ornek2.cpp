#include <stdio.h>
#include <stdlib.h>


static int karar;
float ruzgar,hesap,ihtimal;
int liman(int karar);
int alabora(int ruzgar);

int main(){
	static int cikis;
	do {	
	printf("Teknenizi hangi limandan kullanacaksiniz!\n");
	printf("Mugla\nIzmir\nSinop\nIstanbul\n");
	printf("Karar:");
	scanf("%d", &karar);
	liman(karar);
	printf("Degerleriniz hesaplandi!\n");
	printf("Alabora Olma Ihtimaliniz Icin 0'a basiniz\n");
	scanf("%d", &karar);
	alabora(ruzgar);
	if (ihtimal > 75){
		printf("Alabora Olma Ihtimaliniz: %f\n", ihtimal);
		printf("Kesinlikle cok dikkatli olmalisiniz alabora olabilirsiniz!\n");	
	}
	else if (ihtimal < 74.9 && ihtimal > 50){
		printf("Alabora Olma Ihtimaliniz: %f\n", ihtimal);
		printf("Hava ruzgarli duruma gore degisebilir\n");
	}
	else {
		printf("Alabora Olma Ihtimaliniz: %f\n", ihtimal);
		printf("Keyifli Surusler\n");
	} 
	printf("Cikis Yapmak Icin 0'a basiniz!\n");
	printf("Devam Etmek Icin 1' e basiniz\n");
	scanf("%d", &cikis);
	}while (cikis != 0);
}
int liman (int karar){
	
	switch (karar){
		
		case 1:{
			printf("Bulundugunuz limanin ruzgar degerleri ortalama degerde olan bir liman\n");
			printf("Ruzgar degeriniz giriniz\n");
			scanf("%f", &ruzgar);
			break;
		}
		case 2:{
			printf("Bulundugunuz limanin ruzgar degerleri ortalama degerin altinda olan bir liman\n");
			printf("Ruzgar degeriniz giriniz\n");
			scanf("%f", &ruzgar);
			break;
		}
		case 3:{
			printf("Bulundugunuz limanin ruzgar degerleri ortalama degerin ustunde olan bir liman\n");
			printf("Ruzgar degeriniz giriniz\n");
			scanf("%f", &ruzgar);
			break;
		}
		case 4:{
			printf("Bulundugunuz limanin ruzgar degerleri ortalama degerde olan bir liman\n");
			printf("Ruzgar degeriniz giriniz\n");
			scanf("%f", &ruzgar);
			break;
		}
	}
	return ruzgar;
}
int alabora (int ruzgar){
	static float sabit;	
	if (ruzgar < 5){
		printf("Surus Icin Ruzgar Yok Denecek Kadar Az\n");
		system("exit");
	}else {	
	printf("Deniz Dalga Sabitini Giriniz!\n(Kucuk Tekneler Icin 0.99)\n");
	scanf("%f", &sabit);
	hesap = (ruzgar * 3.5 * sabit) - 15;
	ihtimal = hesap * 80 / 100;	
	}	
	return ihtimal; 
}
