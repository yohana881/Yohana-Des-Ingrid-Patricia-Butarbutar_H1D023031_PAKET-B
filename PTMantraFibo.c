#include<stdio.h> //menandakan bahwa program menggunakan program bahasa c dan fungsi yang akan digunakan oleh program
using namespace std;

typedef struct node*alamat;
//Menghitung deret Fibonacci
Stack node{
    int node;
    int alamat;
    int next;    
}Stack;

int inisialisasi;

alamat inisialisasi(int n*alamat baru ){ // membuat program alamat awal yang akan dimasukan
    alamat n=new;
    new->n=first;
    first->new=n;
    new->next=NULL;
    return;
}

void push(int alamat baru){ //Memasukkan deret yang akan digunakan 
     n->next=first;
    first=n;
    if(first=NULL){
        first=n;
    }else{
        address temp=first;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}

void pop(){
    if(first !=NULL){
        address temp=first;
        **terambil first=first->next;
        free(temp);
    }else{
    while(first==NULL){
        printf("Kosong,gabisa diambil\n");
        return;
    }
}

void cetak(){
    address temp=first;
    while(temp != NULL){
        printf("NIM:%d, Nama:%s, IPK:%.2f\n", temp->data.NIM, temp->data.nama, temp->data.IPK);
        temp=temp->next;
    }
}

int main(){
   alamat inisialisasi;
    
    
}






