#include<stdio.h>
#include<string.h>
struct books{
    int code, price;
    char name[20];
};
void LowtoHighSort(struct books a[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            if(a[j].price > a[j+1].price){
            temp = a[j].price;
            a[j].price = a[j+1].price;
            a[j+1].price = temp;
            }
        }
}
}
void HightoLowSort(struct books a[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            if(a[j].price < a[j+1].price){
            temp = a[j].price;
            a[j].price = a[j+1].price;
            a[j+1].price = temp;
            }
        }
    }
}
void display(struct books a[], int n){
    printf("Code\t\tName\t\tPrice\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\n", a[i].code, a[i].name, a[i].price);
    }
}
int main(){
    int n, Choice;
    printf("Enter number of books to be arranged:");
    scanf("%d", &n);
    struct books a[n];
    printf("Enter Book Code, Name and Price of the Books One on One:\n");
    for(int i=0; i<n; i++){
        scanf("%d%s%d",&a[i].code, a[i].name, &a[i].price);
    }
    
    do{
    printf("Enter your Choice:\n");
    printf("1. Display Low to High Prices.\n");
    printf("2. Display High to Low Prices.\n");
    printf("3. Exit\n");
    scanf("%d", &Choice);
    if(Choice == 1){
        LowtoHighSort(a,n);
        display(a,n);
    }
    else if(Choice == 2){
        HightoLowSort(a,n);
        display(a,n);
    }
    else if(Choice == 3){
        printf("Program Exited! Thank You :) ");
    }
    else{
        printf("Kindly correct your Choice!");
    } } while( Choice != 3);
}