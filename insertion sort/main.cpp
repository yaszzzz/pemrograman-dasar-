#include <stdio.h>
#include <conio.h>

int data[6], n, i, j, tukar, temp;

int main(){

    printf("masukkan jumlah angka = ");
    scanf("%i", &n);
    for (i=0;i<n;i++){
        printf("angka ke-%i = ", i+1);
        scanf("%i",&data[i]);
    }
    printf("data yang akan diurutkan = ");
    for(i=0;i<n;i++){
        printf("%i ",data[i]);
    }
    //Metode Insertion Sort

    for(i=1;i<n;i++){
        temp=data[i];
        j=i-1;
        while(data[j]>temp && j>=0){
            data[j+1]=data[j];
            j--;
        }

        data[j+1]=temp;
        printf("\nproses ke-%i = ", i);
        for(int i=0;i<n;i++){
            printf("%i ",data[i]);
        }
    }
    printf("\ndata hasil pengurutan dengan insertion sort = ");
    for(i=0;i<n;i++){
        printf("%i ",data[i]);
    }
getch();
}
