// LIBRARY MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[50];
    char author[50];
};

void addBook() {
    struct Book b;
    FILE *file = fopen("books.txt", "a");

    if (file == NULL) {
        printf("File not fouund\n");
        return;
    }

    printf("Enter book id: ");
    scanf("%d", &b.id);
    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter author name: ");
    scanf(" %[^\n]", b.author);

    // Save to file: ID, Title, and Author separated by a delimiter (;)
    fprintf(file, "%d;%s;%s\n", b.id, b.title, b.author);
    fclose(file);

    printf("Book added and saved to file successfully!\n");
}

void displayBooks() {
    struct Book b;
    FILE *file = fopen("books.txt", "r");//read mode

    if (file == NULL) {
        printf("\nNo books found. Add some books first!\n");
        return;
    }

    printf("\nBooks List\n");
    printf("%-5s %-20s %-20s\n", "ID", "Title", "Author");
    printf("--------------------------------------------------\n");

    while (fscanf(file, "%d;%[^;];%[^\n]\n", &b.id, b.title, b.author) != EOF) {
        printf("%-5d %-20s %-20s\n", b.id, b.title, b.author);
    }
    printf("--------------------------------------------------\n");

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        //choice menu
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            addBook();
        } else if (choice == 2) {
            displayBooks();
        } else if (choice == 3) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
