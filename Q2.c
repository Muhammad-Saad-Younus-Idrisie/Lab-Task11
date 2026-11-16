#include <stdio.h>

struct product {
    int id;
    char name[50];
    char category[50];
    float price;
    int quantity;
} pro;

void displayProductDetails(struct product pro);

int main(){
    printf("Enter product ID: ");
    scanf("%d", &pro.id);
    printf("Enter product name: ");
    scanf("%s", pro.name);
    printf("Enter product category: ");
    scanf("%s", pro.category);
    printf("Enter product price: ");
    scanf("%f", &pro.price);
    printf("Enter product quantity: ");
    scanf("%d", &pro.quantity);

    displayProductDetails(pro);
}

void displayProductDetails(struct product pro) {
    printf("\nProduct Details:\n");
    printf("ID: %d\n", pro.id);
    printf("Name: %s\n", pro.name);
    printf("Category: %s\n", pro.category);
    printf("Price: %.2f\n", pro.price);
    printf("Quantity: %d\n", pro.quantity);
    printf("The Final Price: %.2f\n", pro.price * 0.95);
}