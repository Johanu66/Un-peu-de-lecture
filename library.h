#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "book.h"
#include "reader.h"
#include "loan.h"
#include "date.h"
#include <chrono>
#include <ctime>
#include <algorithm>
#include "author.h"

class Library{
  private:
    std::string _name;
    std::vector<Author> _authors;
    std::vector<Book> _books;
    std::vector<Reader> _readers;
    std::vector<Loan> _loans;
  public:
    Library(std::string name);
    void addAuthor(Author& author);
    void addBook(Book& book);
    void addReader(Reader& reader);
    bool borrowBook(Reader& reader, Book& book);
    void returnBook(Reader& reader, Book& book);
    std::vector<Book> books() const;
    std::string name() const;
    std::vector<Author> authors() const;
    std::vector<Reader> readers() const;
    std::vector<Loan> loans() const;
};

std::ostream& operator<<(std::ostream& os, const Library& library);

#endif