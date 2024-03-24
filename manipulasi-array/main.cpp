// memanipulasi array 

#include <stdio.h>
#include <conio.h>

int nilai[5],i;

int main (){
	
	printf("masukkan elemen 1 = ");
	scanf("%i",&nilai[0]);
	
	nilai[1]=5;
	nilai[2]=nilai[1]+10;
	
	for(i = 3; i < 5; i++){
	nilai[i]=i*10;
	}
	for(i = 0; i < 5; i++){
	printf("bilangan indexs ke %i = %i \n",i,nilai[i]);		
	}
getch();	
}
