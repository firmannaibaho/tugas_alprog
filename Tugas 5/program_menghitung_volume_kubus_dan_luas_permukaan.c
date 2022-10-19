#include<stdio.h>
#include<math.h>
 float s,lp,v,i;
 
 
 
 int main (){
 	menu();
 	input_pil();
 	pengerjaan();	
 }
 void menu(){
 	printf("||  PROGRAM MENGHITUNG LUAS PERMUKAAN DAN VOLUME KUBUS   ||\n");
 	printf("||=======================================================||\n");
 	printf("||1. MENGHITUNG VOLUME KUBUS                             ||\n");
 	printf("||2. MENGHITUNG LUAS PERMUKAAN KUBUS                     ||\n");
 	printf("||=======================================================||\n");
 }
 void input_pil(){
 	printf("MASUKKAN PILIHAN : ");
 	scanf("%f", &i);
 }
 int pengerjaan(){
 	if (i==1){
 		printf("PROGRAM MENGHITUNG VOLUME KUBUS\n");
 		volume();
 		printf("maka volume kubus dengan sisi %.2f adalah %.2f", s, v);
		 }
	 else if (i==2){
	 	printf("PROGRAM MENGHITUNG LUAS PERMUKAAN KUBUS \n");
	 	luas_permukaan();
	 	printf("maka luas permukaan kubus deengan sisi %.2f adalah %.2f", s, lp);
	 }
	 else{
	 	printf("input tidak valid !!!");
	 }
 }
 int volume(){
 	 	printf("\n");
 		printf("masukkan nilai sisi : ");
 		scanf("%f", &s);
 		v=pow(s,3);
 		return v;
 }
 int luas_permukaan(){
 	printf("\n");
	 	printf("masukkan nilai sisi : ");
	 	scanf("%f", &s);
	 	lp=6*s;
	 	return lp;
 }

