/*Instruksi Preprosesor(Header)*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_STACK 10

// CLASS STACK
struct STACK{
    int top;
    char data[10][10];
};
STACK tumpuk;

// INISIALISASI STACK
void inisialisasi(){
    tumpuk.top=-1;
}

// Fungsi IsFull
int IsFull(){
    if(tumpuk.top==MAX_STACK-1)
        return 1;
    else return 0;
}

// Fungsi IsEmpty
int IsEmpty(){
    if(tumpuk.top==-1) return 1;
    else return 0;
}
// FUNGSI PUSH
void Push(char d[10]){
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d);
    }

// FUNGSI POP
void Pop(){
    printf("Data yang terambil = %s\n",tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

// Fungsi Print
void TampilStack(){
    for(int i=tumpuk.top;i>=0;i--){
        printf("Data : %s\n",tumpuk.data[i]);
    }
}

// FUNGSI CLEAR
void Clear(){
    tumpuk.top=-1;
}

int main(){
int pil;
char dt[10];
    inisialisasi();
    do {
        printf("Pilihan dari Operasi Stack = \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Clear\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan menu = ");
        scanf("%i",&pil);

        switch(pil){
            case 1:if(IsFull()!=1){
            printf("Masukkan Data = ");
            scanf("%s",&dt);
            Push(dt);
            }else printf("Data sudah penuh!\n");
            break;

            case 2:if(IsEmpty()!=1){
            Pop();
            }else printf("Data masih kosong!\n");
            break;

            case 3:if(IsEmpty()!=1){
            TampilStack();
            }else printf("Data masih kosong!\n");
            break;
                
            case 4:Clear();
            printf("Data sudah kosong!\n");
            break;
        }
        getch();
    }
    while(pil!=5);
    getch();

}
