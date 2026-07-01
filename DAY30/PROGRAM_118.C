#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Library {
    int id;
    char book_name[50];
    char author[50];
    float price;
};
void addBook();
void viewBooks();
void searchBook();
void deleteBook();
const char *FILENAME = "library_data.dat";

int main() {
    int choice;

    while (1) {
        printf(" MINI LIBRARY MANAGEMENT SYSTEM \n");
        printf("1. Add Book Record\n");
        printf("2. Display All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Delete a Book\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("\nExiting program. Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please press Enter and try again.\n");
        }
        printf("\nPress Enter to continue...");
        getchar(); // Pause
        getchar();
    }
    return 0;
}

void addBook() {
    struct Library lib;
    FILE *fp = fopen(FILENAME, "ab");

    system("cls || clear");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &lib.id);
    printf("Enter Book Name: ");
    scanf(" %[^\n]s", lib.book_name);
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", lib.author);
    printf("Enter Price: ");
    scanf("%f", &lib.price);

    fwrite(&lib, sizeof(struct Library), 1, fp);
    fclose(fp);

    printf("\nBook added successfully!\n");
}

void viewBooks() {
    struct Library lib;
    FILE *fp = fopen(FILENAME, "rb");

    system("cls || clear");
    if (fp == NULL) {
        printf("No books in the library or file doesn't exist yet.\n");
        return;
    }

    printf("================= BOOK LIST =================\n");
    printf("%s %s %s %s\n", "ID", "Book Name", "Author", "Price");
    printf("\n");

    while (fread(&lib, sizeof(struct Library), 1, fp) == 1) {
        printf("%d %s %s %.2f\n", lib.id, lib.book_name, lib.author, lib.price);
    }

    fclose(fp);
}

void searchBook() {
    int targetId, found = 0;
    struct Library lib;
    FILE *fp = fopen(FILENAME, "rb");

    system("cls || clear");
    if (fp == NULL) {
        printf("No books available to search.\n");
        return;
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &targetId);

    while (fread(&lib, sizeof(struct Library), 1, fp) == 1) {
        if (lib.id == targetId) {
            printf("\nBook Found!\n");
            printf("ID: %d\nName: %s\nAuthor: %s\nPrice: %.2f\n", lib.id, lib.book_name, lib.author, lib.price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d not found.\n", targetId);
    }

    fclose(fp);
}

void deleteBook() {
    int targetId, found = 0;
    struct Library lib;
    FILE *fp, *temp;

    system("cls || clear");
    if ((fp = fopen(FILENAME, "rb")) == NULL) {
        printf("No books available to delete.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");

    printf("Enter Book ID to delete: ");
    scanf("%d", &targetId);

    while (fread(&lib, sizeof(struct Library), 1, fp) == 1) {
        if (lib.id == targetId) {
            found = 1;
            printf("Book '%s' deleted successfully!\n", lib.book_name);
        } else {
            fwrite(&lib, sizeof(struct Library), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove(FILENAME);
    rename("temp.dat", FILENAME);

    if (!found) {
        printf("\nBook with ID %d not found.\n", targetId);
    }
}
