// Binary search 

#include <stdio.h>
#include <conio.h>

int data[9]={3,9,11,12,15,17,23,31,35};  // datanya harus urut
int awal, akhir, tengah, cari; 
int n = 9;
int flag = 0; // untuk proses pencarian 

int main (){	
	awal = 0; // nilai awal
	akhir = n-1;  // nilai akhir
	
	printf("masukkan data yang dicari :  ");
	scanf("%i",&cari); // user input
	
	while (awal <= akhir && flag == 0){
	
	tengah = (awal+akhir)/2; // untuk mencari nilai tengah 
	printf("data tengah indeks %i = %i \n",tengah,data[tengah]);
	
	if (data[tengah]== cari) flag = 1;	
	else if (cari < data[tengah]){	
		printf("mencari ke kiri \n");
		akhir = tengah-1;
	}
	else{
		awal = tengah + 1;
		printf("mencari ke kekanan \n");                                                      
	}
	
	}
	if(flag=1) printf("data ada \n");
	else printf("data tidak ada \n");		 
getch();	
}
