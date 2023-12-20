#ifndef READER_H
#define READER_H

#include <iostream>
#include "book.h"
#include <string>
#include <vector>
#include <algorithm>
#include "person.h"

class Reader: public Person{
  private:
    std::vector<std::string> _borrowed_books_isbn;
  public:
    Reader(std::string last_name, std::string first_name);
    void addBorrowedBook(Book& book);
    void removeBorrowedBook(Book& book);
    std::vector<std::string> borrowedBooksISBN();
};

std::ostream& operator<<(std::ostream& os, const Reader& r);

#endif