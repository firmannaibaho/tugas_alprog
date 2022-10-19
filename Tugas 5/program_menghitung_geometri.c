#include <stdio.h>
#include <math.h>

int a,i,r,un,n,sn;
void header();
int input_pil();
int pengerjaan();	

int main(){
	header();
	input_pil();
	pengerjaan();
	return 0;
}
void header(){
	printf("===============================\n");
	printf("  Program Menghitung Geometri  \n");
	printf("\n");
	printf(" 1. Mencari Barisan Geometri\n");
	printf(" 2. Menghitung jumlah Deret Geometri  \n");
	printf("===============================\n");
}
int input_pil(){
	printf("Pilihan anda : ");
	scanf ("%d", &i);
}
int pengerjaan(){
	if(i==1){
		printf("Program Mencari baris ke n Geometri\n");
		suku_n();
		
		printf("Maka nilai Suku ke-n adalah %d", un);
	}
	else if(i==2){
		printf("Program Menghitung jumlah Deret Geometri\n");
		jumlah_un();		
			if(r<=1){
				sn=a*(1-pow(r,n))/ (1-r) ;
				printf("Maka jumlah Deret Geometrinya adalah %d", sn);
				return sn;
			}			
			else if(r>=1){
				sn=a*(pow(r,n)-1)/(r-1); 
				printf("Maka Deret Geometrinya adalah %d", sn);
				return sn;
			}
	}
}
int suku_n(){
	printf("Masukan Nilai Suku Pertama: ");
	scanf ("%d", &a);
	printf("Masukan Nilai Rasio: ");
	scanf ("%d", &r);
	printf("Masukan Nilai Suku ke-n: ");
	scanf ("%d", &n);
	un=a*pow(r,(n-1));
	return un;
}
int jumlah_un(){
		printf("Masukan Nilai Suku Pertama: ");
		scanf ("%d", &a);
		printf("Masukan Nilai Rasio: ");
		scanf ("%d", &r);
		printf("Masukan Nilai Suku ke-n: ");
		scanf ("%d", &n);
		return 0;
}
