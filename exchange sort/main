// SORTING 
// comparsion based sorting (perbandingan)
// exchange sort
// descending

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
// metode exchange sort
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (data[i]<data[j]){
				tukar = data[j];
				data[i]=data[j];
				data[j]=tukar;
			}
		}
	
	printf("\nproses ke %i = ",i+1);
	
	for(int i = 0;i<n;i++){
		printf(" %i",data[i]);
	}	
	}
	printf("\n data hasil pengurutan exchange sort = ");
	for (i=0;i<n;i++){
		printf(" %i",data[i]);
	}
getch();
}
		
	

