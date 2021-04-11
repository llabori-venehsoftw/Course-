// charllenger_two.cpp Development By Luis LAbori
// Updated 2021-04

#include <cstdio>


struct dewelD {
        short int init;
        short int endd;
    };

struct Card_Book {
    const char * title;
    const char * author;
    const char * publisher;
    const char * subject;
    const char * isbn;
    const char * oclc;
    dewelD numbers;
    short int date_publication;
    short int date_buy;
    short int count_store;
};


int Forty() {

    Card_Book actual_book = {
        " primer libro ",
        " primer author ",
        " primer publicador ",
        " Aventuras externas ",
        " 5434ADFSK876778",
        " hdgdjdkddjdkdk",
        {516,
        78},
        1978,
        1980,
        200,
    };

    printf("The title of book is %s\n", actual_book.title);
    printf("The Author of book is %s\n", actual_book.author);
    printf("The Publisher of book is %s\n", actual_book.publisher);
    printf("The Subject of book is %s\n", actual_book.subject);
    printf("The ISBN of book is %s\n", actual_book.isbn);
    printf("The ISBN of book is %s\n", actual_book.oclc);
    printf("The date of publication of book is %d\n", actual_book.date_publication);
    printf("The date of buy of book is %d\n", actual_book.date_buy);
    printf("The counts in store is %d\n", actual_book.count_store);
    printf("The DD of book is %d.%d\n", actual_book.numbers.init, actual_book.numbers.endd);

    return 0;
}
