#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef union {
    int units;
    float kgs;
} amount;

typedef struct {
    char productName[20];
    float productPrice;
    int productType;
    amount number;
} product;

void getProductDetails(product *p) {

    printf("Enter product name: ");
    scanf("%s", p->productName);

    printf("Enter product price: ");
    scanf("%f", &p->productPrice);
    
    printf("Enter product type (1 for units, 2 for kgs): ");
    scanf("%d", &p->productType);

    if (p->productType == 1) {
        printf("Enter number of units: ");
        scanf("%d", &p->number.units);
    } else if (p->productType == 2) {
        printf("Enter weight in kgs: ");
        scanf("%f", &p->number.kgs);
    } else {
        printf("Invalid product type. Setting default values.\n");
        p->productType = 1;
        p->number.units = 0;
    }
}

int main() {
    product *myStore; // pointer array
    int items, i;

    printf("Enter the number of products: ");
    scanf("%d", &items);

    // Dynamically allocate memory for the products
    myStore = (product *)malloc(items * sizeof(product));
    if (myStore == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get product details from the user
    for (i = 0; i < items; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        getProductDetails(&myStore[i]);
    }

    for (i = 0; i < items; i++) {
        printf("\n%s\n", myStore[i].productName);
        switch (myStore[i].productType) {
            case 1:
                printf("We have %d units.\nUnit price is %.2fTL\n", myStore[i].number.units, myStore[i].productPrice);
                break;

            case 2:
                printf("We have %.2f kg.\nKg price is %.2fTL\n", myStore[i].number.kgs, myStore[i].productPrice);
                break;
            
            default:
                printf("Unknown product type.\n");
        }
    }

    // Free the allocated memory
    free(myStore);

    return 0;
}