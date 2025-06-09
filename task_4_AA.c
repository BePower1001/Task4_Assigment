//
// Created by adria on 04/06/2025.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char title[100];    // book title
    char author[100];   // author name
    char genre[50];     // book genre
    char choice;

    // Plain text menu
    printf("/// BOOK MANAGEMENT SYSTEM ////\n");
    printf("a. Add a new book\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    getchar(); // Clear newline from input buffer

    if (choice == 'a' || choice == 'A') {

        printf("Enter the book's title: ");
        fgets(title, sizeof(title), stdin);
        title[strcspn(title, "\n")] = '\0'; // removing newline

        printf("Enter the author's name: ");
        fgets(author, sizeof(author), stdin);
        author[strcspn(author, "\n")] = '\0';

        printf("Enter the book's genre: ");
        fgets(genre, sizeof(genre), stdin);
        genre[strcspn(genre, "\n")] = '\0';

        // messages for user
        printf("Book added successfully!\n");
        printf("Book Details:\n");
        printf("Title: %s\n", title);
        printf("Author: %s\n", author);
        printf("Genre: %s\n", genre);
    } else {
        //error handling
        printf("Invalid choice. Please enter 'a' or 'A'.\n");
        return 1; // terminate with error message
    }

    return 0; //ends
}