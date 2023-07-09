#include <stdio.h>


typedef enum {
    FICTION,
    NON_FICTION,
    SCIENCE_FICTION,
    MYSTERY,
    THRILLER
} Genre;


typedef struct {
    char title[100];
    char author[100];
    int publicationYear;
    Genre genre;
} Book;


void displayBookInfo(Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);

    
    switch (book.genre) {
        case FICTION:
            printf("Genre: Fiction\n");
            break;
        case NON_FICTION:
            printf("Genre: Non-Fiction\n");
            break;
        case SCIENCE_FICTION:
            printf("Genre: Science Fiction\n");
            break;
        case MYSTERY:
            printf("Genre: Mystery\n");
            break;
        case THRILLER:
            printf("Genre: Thriller\n");
            break;
        default:
            printf("Genre: Unknown\n");
            break;
    }

    printf("\n");
}

int main() {
    
    char title1[100], author1[50];
    int pyear;
    Genre g;
    gets(title1);
    gets(author1);
    scanf("%d", &pyear);
    scanf("%s", g);

    Book book;
    
    strcpy(book.title,title1);
    strcpy(book.author,author1);
    book.publicationYear = pyear;
    book.genre = g;


    
    displayBookInfo(book);

return 0;
}