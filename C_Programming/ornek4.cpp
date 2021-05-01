#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int xx1,yy1,xx2,yy2;
double cevap1,cevap2,dogruCevap;
void cevapUzaklik(double deger);
int hesaplama1(int x1,int x2);
int hesaplama2(int y1,int y2);
int main(){
	
	printf("1. X noktasini giriniz!\n");
	printf("Nokta X1:");
	scanf("%d", &xx1);
	printf("1. Y noktasini giriniz!\n");
	printf("Nokta Y1:");
	scanf("%d", &yy1);
	printf("2. X noktasini giriniz!\n");
	printf("Nokta X2:");
	scanf("%d", &xx2);
	printf("2. Y noktasini giriniz!\n");
	printf("Nokta Y2:");
	scanf("%d", &yy2);
	hesaplama1(xx1,xx2);
	hesaplama2(yy1,yy2);
	cevapUzaklik(cevap1 + cevap2);
	
}
int hesaplama1 (int x1, int x2){
	
	cevap1 = (x1 - x2) * (x1 - x2);
	
	return cevap1;
}
int hesaplama2 (int y1, int y2 ){
	
	cevap2 = (y1 - y2) * (y1 - y2);
	
	return cevap2;
}
void cevapUzaklik (double deger){
	dogruCevap =sqrt(cevap1 + cevap2);
	printf("Noktalar Arasi Uzaklik: %f", dogruCevap);
}
