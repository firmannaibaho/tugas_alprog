#include <stdio.h>
#define phi 3.14

  float k, r, l;
  void header();
 
int main(){
	
header();
input();

return 0;

}

	void header(void){
		printf("=====================================\n");
		printf("Program Menghitung Keliling Lingkaran\n");
		printf("=====================================\n");
	}
	
	int input(){
		
		printf("Input nilai jari-jari lingkaran: ");
		scanf ("%f", &r);
		keliling();
		luas();		
		return 0;
	}
	
	int keliling(){
	k = 2 * phi * r;
		printf("Maka Keliling Lingkaran adalah %.2f\n", k);
		
		return 0;
	}
	  
	int luas(){
	 l = 3.14 * r * r;
		printf("Maka Luas lingkaran adalah %.2fn",l);
		
		return 0;
	}
