#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int menu;
    char *book_title = malloc(100 * sizeof(char));
    char *author_name = malloc(100 * sizeof(char));
    char *book_genre = malloc(50 * sizeof(char));

    if (!book_title || !author_name || !book_genre) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("LIBRARY MANAGEMENT SYSTEM\n1. Add New Book\n");
    scanf("%d", &menu);
    getchar();
    switch (menu) {
        case 1:
            printf("Please enter book title:\n");
        fgets(book_title, 100, stdin);

        printf("Please enter author name:\n");
        fgets(author_name, 100, stdin);

        printf("Please enter book genre:\n");
        fgets(book_genre, 50, stdin);

        book_title[strcspn(book_title, "\n")] = '\0';
        author_name[strcspn(author_name, "\n")] = '\0';
        book_genre[strcspn(book_genre, "\n")] = '\0';

        printf("\nBook Added:\nTitle: %s\nAuthor: %s\nGenre: %s\n",
               book_title, author_name, book_genre);
        break;
        default:
            printf("Invalid option\n");
    }
    free(book_title);
    free(author_name);
    free(book_genre);

    return 0;
}