#include <stdio.h>
#include <stdlib.h>

float cevap,cikti;
float kalori(), hesaplama();
int karar,secim2,bitis;
void secim();

// 10 dakikalýk egzersizlerin yag yakim oranlari

float hesaplama(float cevap){
		
	// cikti döndürerek hesaplama yaparak toplam yakilan kaloriyi bulmak
	return cikti = cevap * 2;
}
void secim(int karar){	
	secim2 = karar;	
	// hesaplamaya göre yakýlan kalori miktarýný belirleme
	
	if (secim2 == 1) {
		
		hesaplama(400);
	}
	else if (secim2 == 2){
		
		hesaplama(500);
	}
	else if (secim2 == 3){
		
		hesaplama(750);
	}
	else if (secim2 == 4){
		
		hesaplama(2000);
	}
	else system("exit");	
}
void kalori(int donus){
	
	if (donus >= 3000){
		printf("2 hamburger\n");
		printf("4 bardak kola\n");
		printf("2 buyuk boy pizza\n");
		printf("Devam etmek icin 1\nCikis icin 0\n");
		scanf("%d", &bitis);
		switch (bitis){
			case 1:
				printf("Yonlendiriliyorsunuz\n");
				break;
			case 0:
				system("exit");
				break;
			default:
				system("exit");	
		}
	}
	else if (donus >= 2000 && donus < 2999){		
		printf("1/2 hamburger\n");
		printf("3 bardak kola\n");
		printf("1 orta boy pizza\n");
		printf("Devam etmek icin 1\nCikis icin 0\n");
		scanf("%d", &bitis);
		switch (bitis){
			case 1:
				printf("Yonlendiriliyorsunuz\n");
				break;
			case 0:
				system("exit");
				break;
			default:
				system("exit");	
		}
	}
	else if (donus > 1500 && donus <1999){		
		printf("ceyrek hamburger\n");
		printf("2 bardak kola\n");
		printf("1 kücük boy pizza\n");
		printf("Devam etmek icin 1\nCikis icin 0\n");
		scanf("%d", &bitis);
		switch (bitis){
			case 1:
				printf("Yonlendiriliyorsunuz\n");
				break;
			case 0:
				system("exit");
				break;
			default:
				system("exit");	
		}
	}
	else {
		printf("0 hamburger\n");
		printf("yarim bardak kola\n");
		printf("yarim kucuk boy pizza\n");
		printf("Devam etmek icin 1\nCikis icin 0\n");
		scanf("%d", &bitis);
		switch (bitis){
			case 1:
				printf("Yonlendiriliyorsunuz\n");
				break;
			case 0:
				system("exit");
				break;
			default:
				system("exit");	
		}		
	}
}
int main(){	
	do{
	
	printf("Egzersiz turu seciniz\n");
	printf("1)10 dk bisiklet surmek\n");
	printf("2)10 dk yuzmek\n");
	printf("3)10 dk kosmak\n");
	printf("4)10 dk agirlik kaldirmak\n");
	
	scanf("%d", &karar);	
	
	secim(karar);
	
	printf("%f\n", hesaplama(cikti));
	printf("Vucut sabit yag yakim orani da eklenmistir\n");	
	printf("Cikis yapmak icin 0'a basiniz\n");
	printf("Yaktiginiz kaloriye es deger yiyecekleri listelemek icin 2'e basiniz\n");
	scanf("%d", &bitis);
	fflush(stdin);
	if (bitis == 2){
		kalori(cikti);
	}	
	}while (bitis != 0);
}

