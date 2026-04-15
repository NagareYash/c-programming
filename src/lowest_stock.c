#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int   stock;
} Product;

Product findLowestStock(Product products[], int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (products[i].stock < products[min_index].stock) {
            min_index = i;
        }
    }
    return products[min_index];
}

int main() {
    Product products[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Product %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Stock: ");
        scanf("%d", &products[i].stock);
        printf("\n");
    }

    Product lowest = findLowestStock(products, 5);

    printf("Product with lowest stock:\n");
    printf("Name: %s, Price: $%.2f, Stock: %d\n",
           lowest.name, lowest.price, lowest.stock);

    return 0;
}