#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 100
typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
} Product;
Product inventory[MAX_ITEMS];
int item_count = 0;
void addItem();
void viewInventory();
void searchItem();
void updateStock();

int main() {
    int choice;

    while (1) {
        printf("\n INVENTORY MANAGEMENT SYSTEM \n");
        printf("1. Add New Product\n");
        printf("2. View All Products\n");
        printf("3. Search Product by ID\n");
        printf("4. Update Stock Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addItem(); break;
            case 2: viewInventory(); break;
            case 3: searchItem(); break;
            case 4: updateStock(); break;
            case 5: 
                printf("Exiting system. Goodbye!\n"); 
                return 0;
            default: 
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }
}
void addItem() {
    if (item_count >= MAX_ITEMS) {
        printf("Inventory is full! Cannot add more products.\n");
        return;
    }

    Product p;
    printf("\nEnter Product ID (Integer): ");
    scanf("%d", &p.id);
    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == p.id) {
            printf("Error: Product with ID %d already exists!\n", p.id);
            return;
        }
    }

    printf("Enter Product Name: ");
    scanf(" %[^\n]s", p.name); 
    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter Price: ");
    scanf("%f", &p.price);

    inventory[item_count] = p;
    item_count++;
    printf("Product added successfully!\n");
}
void viewInventory() {
    if (item_count == 0) {
        printf("\nInventory is empty!\n");
        return;
    }
    printf("%s %s %s %s\n", "ID", "Name", "Quantity", "Price");
    printf("\n");
    for (int i = 0; i < item_count; i++) {
        printf("%d %s %d $%f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
    printf("\n");
}
void searchItem() {
    if (item_count == 0) {
        printf("\nInventory is empty!\n");
        return;
    }

    int search_id;
    printf("\nEnter Product ID to search: ");
    scanf("%d", &search_id);

    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == search_id) {
            printf("\nProduct Found:\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: $%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }
    printf("Product with ID %d not found.\n", search_id);
}
void updateStock() {
    if (item_count == 0) {
        printf("\nInventory is empty!\n");
        return;
    }

    int search_id, new_quantity;
    printf("\nEnter Product ID to update stock: ");
    scanf("%d", &search_id);

    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == search_id) {
            printf("Current Quantity for %s: %d\n", inventory[i].name, inventory[i].quantity);
            printf("Enter new total quantity: ");
            scanf("%d", &new_quantity);
            
            if (new_quantity < 0) {
                printf("Quantity cannot be negative!\n");
                return;
            }
            
            inventory[i].quantity = new_quantity;
            printf("Stock updated successfully!\n");
            return;
        }
    }
    printf("Product with ID %d not found.\n", search_id);
}
