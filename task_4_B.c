// Created by adria on 05/06/2025.
#include <stdio.h>
#include <string.h>

int main(void) {
    char book_title[100];
    char author_name[100];
    char book_genre[50];
    int menu;
    int book_added = 0;
    char loop;
    do {
        // Plain text menu
        printf("//// LIBRARY MANAGEMENT SYSTEM ////\n");
        printf("1. Add New Book\n2. View All Books\n3. Exit\n");
        // Basic menu validation
        do {
            printf("Enter your choice (1-3): ");
            scanf("%d", &menu);
            getchar();
            if (menu < 1 || menu > 3)
                printf("Invalid option. Please enter 1, 2, or 3.\n");
        } while (menu < 1 || menu > 3);
        switch (menu) {
            case 1:
                // Add a new book
                printf("BOOK ADDITION\n___________________\n");
                printf("Please enter book title: ");
                fgets(book_title, sizeof(book_title), stdin);
                book_title[strcspn(book_title, "\n")] = '\0';
                printf("Please enter author name: ");
                fgets(author_name, sizeof(author_name), stdin);
                author_name[strcspn(author_name, "\n")] = '\0';
                printf("Please enter book genre: ");
                fgets(book_genre, sizeof(book_genre), stdin);
                book_genre[strcspn(book_genre, "\n")] = '\0';
                book_added = 1;
                printf("Book added successfully!\n");
                printf("Book Details:\n");
                printf("Title: %s\n", book_title);
                printf("Author: %s\n", author_name);
                printf("Genre: %s\n", book_genre);
                break;
            case 2:
                //view all books
                printf("VIEW ALL BOOKS\n___________________\n");
                if (book_added) {
                    printf("Title: %s\n", book_title);
                    printf("Author: %s\n", author_name);
                    printf("Genre: %s\n", book_genre);
                } else {
                    printf("No books have been added yet.\n");
                }
                break;
            case 3:
                // exit prompt
                printf("EXITING SYSTEM\n___________________\n");
                if (book_added) {
                    printf("Books Added:\n");
                    printf("Title: %s\n", book_title);
                    printf("Author: %s\n", author_name);
                    printf("Genre: %s\n", book_genre);
                } else {
                    printf("No books were added.\n");
                }
                return 0; //prog ending
            default:
                break;
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &loop);
        getchar();
    } while (loop == 'y' || loop == 'Y');
    return 0;
}