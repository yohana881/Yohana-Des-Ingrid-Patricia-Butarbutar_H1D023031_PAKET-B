#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node*address;
typedef struct Mahasiswa{
    int NIM;
    char nama[50];
    float IPK;
}Mahasiswa;
typedef struct Node{
    Mahasiswa data;
    address next;
}Node;

address first=NULL;

address alokasi(int NIM,char*nama, float IPK){
    address newNode=(address)malloc(sizeof(Node));
    strcpy(newNode->data.nama, nama);
    newNode->data.NIM=NIM;
    newNode->dtaa.IPK=IPK;
    newNode->next=NULL;
    return newNode;
}

void insertFirst(address p){
    p->next=first;
    first=p;
}

void insertLast(address p){
    if(first=NULL){
        first=p;
    }else{
        address temp=first;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}

void deleteFirst(){
    if(first !=NULL){
        address temp=first;
        first=first->next;
        free(temp);
    }
}

void deleteLast(){
    if(first==NULL){
        printf("Kosong,gabisa dihapus\n");
        return;
    }

    if(first->next==NULL){
        free(first);
        first=NULL;
        return;
    }

    address current=first;
    address prev=NULL;
    while(current->next !=NULL){
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
    free(current);
}

void cetak(){
    address temp=first;
    while(temp != NULL){
        printf("NIM:%d, Nama:%s, IPK:%.2f\n", temp->data.NIM, temp->data.nama, temp->data.IPK);
        temp=temp->next;
    }
}

void insertAscending(address p){
    

}

void swapData(address node1, address node2){

}

void sortLIst(){

}

void cetakBerdasarkanNIM(){
    sortList();

}

int main(){
    address current;
    current=alokasi(125,"BUDi", 3.5);
    insertFirst(current);
    current=alokasi(128,"Siti", 3.7);
    insertLast(current);
    current=alokasi(126,"Andi", 3.8);
    insertLast(current);
    current=alokasi(130,"Desi", 3.2);
    insertFirst(current);
    current=alokasi(127,"Dedi", 3.9);
    insertLast(current);
    current=alokasi(129,"Saki", 3.4);
    insertFirst(current);


    
}