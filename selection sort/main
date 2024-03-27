// selection sort 
#include <stdio.h>
#include <conio.h>

int data[6],n,i,j,tukar,pos;

int main(){
    printf("masukkan jumlah angka : ");
    scanf("%i",&n);

    for(i=0;i<n;i++){
        printf("angka indeks ke : %i ", i);
        scanf("%i",&data[i]);
    }
    printf("data yang akan diurutkan : ");
    for (i=0;i<n;i++){
        printf("%i",data[i]);
    }
// metode selection 
    for(i=0;i<n;i++){
        pos=i;
        for( j=i+1;j<n;j++){
            if (data[j]<data[pos])
            pos = j;
        }
        if (pos != i){
            tukar = data[pos];
            data[pos]=data[i];
            data[i]=tukar;
        }
        printf("\n proses ke %i = ",i+1);
        for(int i = 0; i <n;i++){
            printf("%i",data[i]);
        }
    }
    printf("\n data hasil pengurutan selesction sort : ");
    for (i=0;i<n;i++){
        printf("%i",data[i]); 
    }
getch();
}
