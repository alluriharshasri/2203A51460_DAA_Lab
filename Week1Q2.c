#include<stdio.h>
#include<string.h>
struct courier{
    int code;
    char destination[20];
};
void InsertionSort(struct courier a[], int n){
    int key;
    for(int i=1; i<n; i++){
        key = a[i].code;
        int j = i - 1;
        while (j >= 0 && a[j].code > key)
        {
            a[j+1].code = a[j].code;
            j = j - 1;
        }
        a[j+1].code = key;
    }
}

void display(struct courier a[], int n) {
    printf("Code\t\tDestination\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\n", a[i].code, a[i].destination);
    }
}

int main(){
    int n;
    printf("Enter number of Couriers: ");
    scanf("%d", &n);
    struct courier a[n];
    printf("Enter the Courier code and destination\n");
    for(int i=0; i<n; i++){
        scanf("%d%s", &a[i].code, a[i].destination);
    }
    InsertionSort(a,n);
    display(a,n);

}