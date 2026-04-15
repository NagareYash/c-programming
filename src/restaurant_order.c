#include <stdio.h>

typedef struct {
    char  name[50];
    float price;
} MenuItem;

typedef struct {
    int       table_number;
    int       item_count;
    MenuItem  items[5];
} Order;

void addItem(Order *order, MenuItem item) {
    if (order->item_count >= 5) {
        printf("Error: Order is full! Cannot add %s.\n", item.name);
        return;
    }
    order->items[order->item_count] = item;
    order->item_count++;
}

void printBill(Order *order) {
    float subtotal = 0.0f;

    printf("========================\n");
    printf("TABLE %d \xE2\x80\x94 ORDER BILL\n", order->table_number);
    printf("========================\n");

    for (int i = 0; i < order->item_count; i++) {
        printf("%-20s$%6.2f\n", order->items[i].name, order->items[i].price);
        subtotal += order->items[i].price;
    }

    float tax = subtotal * 0.10f;
    float total = subtotal + tax;

    printf("------------------------\n");
    printf("%-20s$%6.2f\n", "Subtotal:", subtotal);
    printf("%-20s$%6.2f\n", "Tax (10%):", tax);
    printf("------------------------\n");
    printf("%-20s$%6.2f\n", "Total:", total);
    printf("========================\n");
}

int main() {
    Order o = { .table_number = 7, .item_count = 0 };

    MenuItem burger = { .name = "Burger", .price = 12.99f };
    MenuItem fries  = { .name = "Fries",  .price = 4.99f  };
    MenuItem coke   = { .name = "Coke",   .price = 2.50f  };

    addItem(&o, burger);
    addItem(&o, fries);
    addItem(&o, coke);

    printBill(&o);

    /* Test the overflow case - try adding 3 more items (only 2 can fit) */
    MenuItem extra1 = { .name = "Pizza",  .price = 14.99f };
    MenuItem extra2 = { .name = "Salad",  .price = 8.99f  };
    MenuItem extra3 = { .name = "Dessert", .price = 6.50f };

    printf("\nTrying to add 3 more items...\n");
    addItem(&o, extra1);
    addItem(&o, extra2);
    addItem(&o, extra3);

    return 0;
}