#include <stdio.h>
#include <stdlib.h>
#include <time.h> //time() fonksionu içeren kütüphane

int main(){
	
	int rastgeleSayi = 0, istenensayi,iterasyon=1;
	int ustSinir=50;
	int altSinir=0;
	
	printf("Istenen sayi giriniz:");
	scanf("%d", &istenensayi);
	srand(time(NULL));
	
	while(rastgeleSayi != istenensayi){
		rastgeleSayi =(rand() % (ustSinir - altSinir)) + altSinir +1;
		printf("Uretilen rastgele sayi: %d\n", rastgeleSayi);
		if(rastgeleSayi == istenensayi){
			break;			
		}
		else if(istenensayi<rastgeleSayi){
			ustSinir = rastgeleSayi;
		}
		else if(istenensayi > rastgeleSayi){
			altSinir = rastgeleSayi;
		}
		iterasyon++;
	}
	printf("Istenen sayi %d iterasyonda bulundu \n", iterasyon);
	system("pause");
	return 0;
}
