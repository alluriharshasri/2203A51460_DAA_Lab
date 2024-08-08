#include <stdio.h>
#include <string.h>

struct ecom {
    int code, price, quantity;
    char name[20];
};

void SelectionSort(struct ecom a[], int n) {
    int i, j, min_idx;
    struct ecom temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (a[j].price < a[min_idx].price) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }
}

void display(struct ecom a[], int n) {
    printf("Code\t\tName\t\tPrice\t\tQuantity\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\n", a[i].code, a[i].name, a[i].price, a[i].quantity);
    }
}

int main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    struct ecom a[n];

    printf("Enter the item code, name, price, and quantity:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %d", &a[i].code, a[i].name, &a[i].price, &a[i].quantity);
    }

    SelectionSort(a, n);
    display(a, n);

    return 0;
}
