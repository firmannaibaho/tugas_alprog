#include<stdio.h>
int i;
float s, v, t;
int main(){
menu();
input_pil();
pengerjaan();
return 0;	
}
void menu(){
	printf("|| PROGRAM MENGHITUNG KECEPATAN, WAKTU, DAN JARAK MATEMATIKA ||\n");
 	printf("||===========================================================||\n");
 	printf("||1. MENCARI NILAI KECEPATAN                                 ||\n");
 	printf("||2. MENGHITUNG NILAI WAKTU                                  ||\n");
 	printf("||3. MENGHITUNG NILAI JARAK                                  ||\n");
 	printf("||===========================================================||\n");
}
void input_pil(){
	printf("masukkan pilihan : ");
	scanf("%d", &i);
}
int pengerjaan(){

	if (i==1){
		printf("PROGRAM MENGHITUNG KECEPATAN \n");
		kecepatan();
		printf("nilai kecepatannya adalah %.2f km/jam", v);
	}
		else if (i==2){
		printf("PROGRAM MENGHITUNG WAKTU \n");
		waktu();
		printf("nilai waktunya adalah %.2f jam", t);
	}
		else if (i==3){
		printf("PROGRAM MENGHITUNG JARAK \n");
		jarak();
		printf("nilai jaraknya adalah %.2f km", s);
	}
}
int kecepatan(){
	
		printf("masukkan nilai jarak (km) : ");
		scanf("%f", &s);
		printf("masukkan nilai waktu (jam) : ");
		scanf("%f", &t);
		v = s/t;
		return v;
}
int waktu(){
		printf("masukkan nilai jarak (km) : ");
		scanf("%f", &s);
		printf("masukkan nilai kecepatan (km/jam) : ");
		scanf("%f", &v);
		t = s/v;
		return t;
}
int jarak(){
		printf("masukkan nilai kecepatan (km/jam) : ");
		scanf("%f", &v);
		printf("masukkan nilai waktu (jam) : ");
		scanf("%f", &t);
		s = v*t;
		return s;	
}
