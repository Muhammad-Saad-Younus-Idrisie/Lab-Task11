#include <stdio.h>

struct item {
    int id;
    char name[50];
    int quantity;
    float price;
} typedef(item);

int main() {
    item Array[5];
    int TotalPrice = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter item ID: ");
        scanf("%d", &Array[i].id);
        printf("Enter item name: ");
        scanf("%s", Array[i].name);
        printf("Enter item quantity: ");
        scanf("%d", &Array[i].quantity);
        printf("Enter item price: ");
        scanf("%f", &Array[i].price);
    }

    for (int i = 0; i < 5; i++) {
        TotalPrice += Array[i].price * Array[i].quantity;
    }

    printf("Total Inventory Value: %.2f\n", TotalPrice);

    printf("Enter Item ID to search: ");
    int searchID;
    scanf("%d", &searchID);
    int found = 0;
    int index = 0;
    while (found == 0){
        if (Array[index].id == searchID){
            found = 1;
            printf("Item Found:\n");
            printf("ID: %d\n", Array[index].id);
            printf("Name: %s\n", Array[index].name);
            printf("Quantity: %d\n", Array[index].quantity);
            printf("Price: %.2f\n", Array[index].price);
        }
        index++;
    }
    if (found == 0) {
        printf("Item not found.\n");
    }

    return 0;
}