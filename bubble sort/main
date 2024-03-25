// SORTING 
// comparsion based sorting (perbandingan)
// Bubble sort
// ASCENDING

#include <stdio.h>
#include <conio.h>

int data[6], n,i,j,tukar;

int main (){	
	printf("masukkan jumlah angka :  ");
	scanf("%i",&n); // user input
	
	for(i=0;i<n;i++){
		printf("Angka indeks  %i = ",i);
		scanf ("%i",&data[i]);
	}
	printf("data yang akan diurutkan = ");
	for (i = 0; i < n;i++){
		printf(" %i",data[i]);
	}
// metode bubble sort
	for (i=1;i<n;i++){
		for(j = n-1;j >= i; j--){
			if (data[j]<data[j-1]){
				tukar = data[j];
				data[j] = data[j-1];
				data[j-1] = tukar;
			}
		}
		printf("\nproses ke %i = ",i);
		for(int i = 0;i < n;i++){
			printf(" %i",data[i]);
		}	
	}
	printf("\n data hasil penguyrutan bubble sort = ");
	for (i=0;i<n;i++){
		printf(" %i",data[i]);
	}	
getch();	
}
