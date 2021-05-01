#include <stdio.h>
#include <stdlib.h>

// lastik ömrü hesaplayan program

float lastik(),omur,cevap,yil;
int lastikYil,eski,yol,karar,son;
void lastikOmur();

float lastik(float yil){	
	printf("Lastigi kac yilinda aldiniz?\n");
	scanf("%d", &lastikYil);
	if (lastikYil > 2021 || lastikYil < 2000){
		printf("Yanlis bir yil girdisi yapildi\n");
	}	
	lastikYil = 2021 - lastikYil;		
	return lastikYil;
}
void lastikOmur(float cevap){	
	
	do{
	
	if (lastikYil >= 5){
		printf("Lastiginizin degisim vakti gelmis.\n");
	}
	else if (lastikYil < 5 && lastikYil > 0){
		
		printf("Lastiginizin disinda yazan harflerden sonraki son 3 sayiyi giriniz...\n");
		scanf("%d", &eski);
		if (eski >999 || eski <100){
			printf("UYARÝ\n");
			printf("Yanlis girdi!\n");
			printf("Islemlerde hata olabilir, programdan cikis yapip tekrar deneyiniz.\n");
		}		
		printf("Siklikla kullanilan araziyi giriniz!\n");		
		printf("1-Asfalt\n2-Toprak\n3-Cakil\n4-Kirli Asfalt\n");
		printf("Arazi:");
		scanf("%d", &yol);				
		
		switch (yol){
			case 1:{
				omur = ((eski * 1.115) * lastikYil);
				break;				
			}
			case 2:{
				omur = ((eski * 1.355) * lastikYil);
				break;
			}
			case 3:{
				omur = ((eski * 1.715) * lastikYil);
				break;
			}
			case 4:{
				omur = ((eski * 1.915) * lastikYil);
				break;
			}
			default: break;
		}			
	}
	else system("exit");
	
	printf("Lastiginizin omru hesaplaniyor....\n");	
	
	printf("%2.f\n", omur);
	
	if (omur >= 2000){
		printf("Kullanim sartlarindan dolayi lastik degisim zamani gelmis\n");
	}
	else if (omur <2000 && omur >= 1300){
		printf("Lastigin az bir omru kalmis\n");
	}
	else if (omur <1300 && omur > 500){
		printf("Lastik iyi kullaniliyor\n");
	}
	else printf("Lastikte hicbir sikinti yok\n");
	printf("Cikis icin 1 e basiniz\n");	
	scanf("%d", &son);
	}while (son != 1);
}
int main(){
	
	printf("Lastiginizin omrunu hesaplamaya hosgeldiniz\n");
	printf("Devam etmek icin herhangi bir sayiya basiniz.\n");
	printf("Cikis yapmak icin 1 e basiniz\n");	
	scanf("%d", &karar);
	while (karar != 1){
	
	lastik(yil);
	lastikOmur(lastikYil);
	printf("Baska bir lastigin omrunu hesaplamak icin 0\nProgramdan cikis yapmak icin 1\n");	
	scanf("%d", &karar);
	}
	
	
}
