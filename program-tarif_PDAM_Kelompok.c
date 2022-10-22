#include<stdio.h>
#include<windows.h>

float awal, akhir;
int i;
int validasi(int x);
void input1();
void input2();
void input3();
void input4();
void input5();
void back_menu();

void header(){
	system("cls");
	printf("||==================================================================================||\n");
	printf("\t Tarif Air Minum Perusahaan Umum Air Minum Tirta Sewakadarma\n");             
	printf("\t\t\t Kelompok Firman & Maxwell\n");
	printf("||==================================================================================||\n");

}
void menu_awal(){
	printf("\n\n");
	printf("\t\t\t||===============================================||\n");
	printf("\t\t\t\t\t Kelompok Pengguna\n");
	printf("\t\t\t\t\t 1. Rumah\n");
	printf("\t\t\t\t\t 2. Usaha\n");
	printf("\t\t\t||===============================================||\n");
	
}
void menu1(){
	int pilih;
 
	printf(" Masukan Pilihan Kelompok Pengguna: \n");
	pilih = validasi(1);
	system("cls");
	//scanf ("%d", &pilih);
	
	if (pilih==1){
	
	printf("\n\n");
	printf("\t\t\t||===================================||\n");
	printf("\t\t\t\t Kelompok Pelanggan\n");
	printf("\t\t\t 1. Non Niaga Bersubsidi\n");
	printf("\t\t\t 2. Non Niaga Tanpa Bersubsidi\n");
	printf("\t\t\t||===================================||\n");
	printf("\t\t Masukan Pilihan Kelompok Pelanggan\n");
	i = validasi(1);
	system("cls");
	input1();
	
	}
	
	else if (pilih==2){
	printf("\t\tNiaga\n");
	printf("1.	Niaga Kecil\n");
	printf("2.	Niaga Sedang\n");
	printf("3.	Niaga\n");
	printf("masukkan pilihan : ");
	i = validasi(2);
	//scanf("%d", &i);
	input5();
	}
	
}

int main(){
	int input;
char nama[100];
	system("cls");
	printf("\n==========================================================\n");
	printf("Masukan Nama Anda: ");
	scanf("%s",&nama);
	printf("===========================================================\n");
	printf("Halo %s Selamat Datang \n",&nama);
	printf("\n\n");
	printf("Silahkan lanjut Jika ingin Membayar Tarif PDAM\n");
	printf("1.	ya\n");
	printf("2.	tidak\n");
	input =	validasi(1);
	if (input==1){
	header();
	menu_awal();
	menu1();
	back_menu();	
	}
	else if (input==2){
		exit(0);
	}
}

void input1(){
	
	if (i==1){
		printf("\t\t Non Niaga Bersubsidi\n");
		printf("1.	Rumah Tangga A1\n");
		printf("2.	Rumah Tangga A2\n");
		printf("3.	Rumah Tangga A3\n");
		printf("4.	Rumah Tangga A4\n");
		printf("Masukan Pilihan: \n");
		i = validasi(3);
		//scanf ("%d", &i);
		system("cls");
		input3();
		}
	
	else if (i==2){
		printf("\t\t Non Niaga Tanpa Bersubsidi\n");
		printf("1.	Rumah Tangga A1\n");
		printf("2.	Rumah Tangga A2\n");
		printf("3.	Rumah Tangga A3\n");
		printf("4.	Rumah Tangga A4\n");
		printf("5.	Rumah Tangga B\n");	
		printf("Masukan Pilihan: \n");
		i = validasi(4);
		//scanf ("%d", &i);
		system("cls");
		input4();
	}
	
}

void input3(){

	int pilih;
	
	if (i==1){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D1-1\n");
		printf("2.	D1-2\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D1-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
							
				if(m3<=10){
					tarif = m3*1780;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*2060+(10*1780);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*5880+(10*1780)+(10*2060);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D1-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				if(m3<=10){
					tarif = m3*2060;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*2340+(10*2060);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*5940+(10*2060)+(10*2340);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
			}	
	}
			
	else if(i==2){
		float m3,tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D2-1\n");
		printf("2.	D2-2\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D2-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*2340;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*2620+(10*2340);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6000+(10*2340)+(10*2620);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
		
			else if(pilih==2){
				printf(" Golongan Pelanggan D2-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*2620;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*2900+(10*2620);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6060+(10*2620)+(10*2900);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
	}
		
	else if(i==3){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D3-1\n");
		printf("2.	D3-2\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D3-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*2900;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*3180+(10*2900);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6120+(10*2900)+(10*3180);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D3-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*3180;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*3460+(10*3180);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6180+(10*3460)+(10*3180);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
		}
	}
	else if(i==4){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D4-1\n");
		printf("2.	D4-2\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D4-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*3460;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*3740+(10*3460);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6240+(10*3460)+(10*3740);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D4-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*3740;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*4020+(10*3740);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*6300+(10*3740)+(10*4020);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
	}	
}
void input4(){
	int pilih;
	
	if (i==1){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D1-3\n");
		printf("2.	D1-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D1-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;			
				if(m3<=10){
					tarif = m3*6340;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9200+(10*6340);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*9600+(10*6340)+(10*9200);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D1-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				if(m3<=10){
					tarif = m3*6320;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9350+(10*6320);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*9650+(10*9350)+(10*6320);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
			}	
	}
			
	else if(i==2){
		float m3,tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D2-3\n");
		printf("2.	D2-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D2-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6490;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9500+(10*6490);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*9800+(10*6490)+(10*9500);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
		
			else if(pilih==2){
				printf(" Golongan Pelanggan D2-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6570;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9650+(10*6570);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*9950+(10*6570)+(10*9650);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
	}
		
	else if(i==3){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D3-3\n");
		printf("2.	D3-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D3-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6640;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9800+(10*6640);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10100+(10*9800)+(10*6640);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D3-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6720;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9950+(10*6720);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10250+(10*9950)+(10*6720);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
	}
	
	else if(i==4){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D4-3\n");
		printf("2.	D4-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(1);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D4-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6790;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10100+(10*6790);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10400+(10*6790)+(10*10100);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D4-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6870;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10250+(10*6870);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10550+(10*10250)+(10*6870);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
	}
	else if (i==5){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	D5-1\n");
		printf("2.	D5-2\n");
		printf("3.	D5-3\n");
		printf("4.	D5-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(3);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan D5-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*6950;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10400+(10*6950);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10700+(10*6950)+(10*10400);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan D5-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*7020;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10550+(10*7020);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10850+(10*10550)+(10*7020);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			else if(pilih==3){
				printf(" Golongan Pelanggan D5-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*7090;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10700+(10*7090);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*11000+(10*10700)+(10*7090);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			else if(pilih==4){
				printf(" Golongan Pelanggan D5-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*7170;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10850+(10*7170);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*11150+(10*10850)+(10*7170);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
}
}
void input5(){
	int pilih;
	
	if (i==1){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	E1-1\n");
		printf("2.	E1-2\n");
		printf("3.	E1-3\n");
		printf("4.	E1-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(3);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan E1-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;			
				if(m3<=10){
					tarif = m3*9200;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*9850+(10*9200);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*10950+(10*9200)+(10*9850);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan E1-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				if(m3<=10){
					tarif = m3*9500;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10150+(10*9500);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*11250+(10*10150)+(10*9500);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
			}
			else if(pilih==3){
				printf(" Golongan Pelanggan E1-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				if(m3<=10){
					tarif = m3*9800;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10450+(10*9800);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*11550+(10*10450)+(10*9800);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
			}
			else if(pilih==4){
				printf(" Golongan Pelanggan E1-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				if(m3<=10){
					tarif = m3*10100;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*10750+(10*10100);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*11850+(10*10750)+(10*10100);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			
			}	
	}
			
	else if(i==2){
		float m3,tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	E2-1\n");
		printf("2.	E2-2\n");
		printf("3.	E2-3\n");
		printf("4.	E2-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(3);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan E2-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*10400;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*11050+(10*10400);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*12150+(10*10400)+(10*11050);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
		
			else if(pilih==2){
				printf(" Golongan Pelanggan E2-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*10700;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*11350+(10*10700);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*12550+(10*10700)+(10*11350);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
				if(pilih==3){
				printf(" Golongan Pelanggan E2-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*11000;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*11650+(10*11000);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*13150+(10*11000)+(10*11650);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
		
			else if(pilih==4){
				printf(" Golongan Pelanggan E2-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*11300;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*11950+(10*11300);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*13950+(10*11300)+(10*11950);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
	}
		
	else if(i==3){
		float m3, tarif;
		printf("\t\tGolongan Pelanggan\n");
		printf("1.	E3-1\n");
		printf("2.	E3-2\n");
		printf("3.	E3-3\n");
		printf("4.	E3-4\n");
		printf("Masukan Golongan Pelanggan: \n");
		pilih = validasi(3);
		//scanf ("%d", &pilih);
		system("cls");
		
			if(pilih==1){
				printf(" Golongan Pelanggan E3-1\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*11600;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*12250+(10*11600);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*14750+(10*12250)+(10*11600);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==2){
				printf(" Golongan Pelanggan E3-2\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*11900;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*12550+(10*11900);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*15050+(10*12550)+(10*11900);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
				if(pilih==3){
				printf(" Golongan Pelanggan E3-3\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*12200;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*12850+(10*12200);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*15850+(10*12850)+(10*12200);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
			
			else if(pilih==4){
				printf(" Golongan Pelanggan E3-4\n");
				printf(" Masukan Pemakaian Progresif awal/m3: \n");
				awal = validasi(5);
				//scanf ("%f", &awal);
				printf(" Masukan Pemakaian Progresif akhir/m3: \n");
				akhir = validasi(5);
				//scanf ("%f", &akhir);
				m3 = akhir-awal;
				
				if(m3<=10){
					tarif = m3*12500;
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>10 && m3<21){
					tarif = (m3-10)*13150+(10*12500);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
				
				else if(m3>20){
					tarif = (m3-20)*16650+(10*13150)+(10*12500);
					printf("Maka Tarif Air Rp%.2f", tarif);
				}
			}
	}
}

int validasi(int x){
		
		double pilihan = 0;
		int hasil;
		float awal;
		float akhir;
		int i = 0;
		
		//perulangan untuk validasi
		do{
			pilihan = scanf("%d", &hasil);
			
			if (pilihan == 0){
				getchar();
				printf("Input invalid! Pilih dengan benar : ");
			}
			else if (x == 1){
				if (hasil > 2 || hasil <= 0){
					printf("Input invalid! Pilih dengan benar, Pilihan Hanya Berupa Angka 1&2: ");
				}
				else {
					i = 1;
				}  
			}
			else if(x == 2){
				if (hasil > 3 || hasil <= 0){
					printf("Input invalid! Pilih dengan benar, Pilihan Hanya 1-3: ");
				}
				else {
					i = 1;
				}  
			}
			else if(x == 3){
				if(hasil > 4 || hasil <= 0 ){
					printf("Input Invalid! Pilih dengan benar: ");
				}
				
				else {
					i = 1;
				}
			}
			else if(x==4){
				if(hasil > 5 || hasil <= 0){
					printf("Input Invalid! Pilih dengan benar, Pilihan Hanya 1-5: ");
				}
				else {
					i = 1;
				}
			}
			else if(x==5){
				if(hasil <=0){
					printf("Input Angka Tidak Boleh Bernilai Nol!, Silahkan Input Nilai Yang Benar: ");
				}
				else {
					i = 1;
				}
			}
			
			else{
				i = 1;
			} 
		} while (i != 1);

		return hasil;
		
	}
	
	void back_menu(){
		int pilih;
		
		printf("\n\n");
		printf("1. Balik Ke Menu\n");
		printf("2. Keluar Dari Program\n");
		printf("Pilihan: ");
		pilih = validasi(1);
		system("cls");
		// scanf("%d", &pilih);
	
			if (pilih==1){
				main();
		
			}
	
			else if (pilih==2){
				printf("\n\n");
				printf("\t\t\t||========================================================||\n");
				printf("\t\t\t\t Terima kasih Telah Menggunankan Layanan Kami\n");
				printf("\t\t\t||========================================================||\n");
    		}
	
	}

