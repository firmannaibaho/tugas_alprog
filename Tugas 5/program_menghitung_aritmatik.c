#include<stdio.h>
float a,b,un,sn;
int n,i;
int main(){
menu();
input_pil();
pengerjaan();	
}
void menu(){
	
	printf("||  PROGRAM MENCARI NILAI SUKU DAN JUMLAH DERET ARITMATIKA   ||\n");
 	printf("||===========================================================||\n");
 	printf("||1. MENCARI NILAI SUKU KE N                                 ||\n");
 	printf("||2. MENGHITUNG JUMLAH DERET KE N                            ||\n");
 	printf("||===========================================================||\n");
}
void input_pil(){
	printf("masukkan pilihan : ");
	scanf("%d", &i);
}
int pengerjaan(){
	if (i==1){
		printf("PROGRAM MENCARI SUKU KE N \n");
		suku_n();
		printf("maka nilai suku ke %d adalah %.2f", n,un);
	}
	else if (i==2){
		printf("PROGRAM MENGHITUNG JUMLAH DERET KE N \n");
		jumlah_sn();
		printf("maka jumlah deret ke %d adalah %.2f", n,sn);
	}
	else{
	printf("invalid!!!");
	}
}
int suku_n(){
	printf("\n");
	printf("masukkan nilai a : ");
	scanf("%f", &a);
	printf("masukkan nilai b : ");
	scanf("%f", &b);
	printf("nilai suku yang dicari : ");
	scanf("%d", &n);
	un=a+(n-1)*b;
	return un;
}
int jumlah_sn(){
	printf("\n");
	printf("masukkan nilai a : ");
	scanf("%f", &a);
	printf("masukkan nilai b : ");
	scanf("%f", &b);
	printf("jumlah deret ke n yang dicari : ");
	scanf("%d", &n);
	un=a+(n-1)*b;
	sn=0.5*(a+un);
	return sn;
}
