#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "author.h"
#include "date.h"

class Book{
  private:
    std::string _title;
    Author _author;
    std::string _langage;
    std::string _type;
    Date _post_date;
    std::string _isbn;
  public:
    Book(std::string title, Author author, std::string langage, std::string type, Date post_date, std::string isbn);
    std::string title() const;
    Author author() const;
    std::string langage() const;
    std::string type() const;
    Date postDate() const;
    std::string isbn() const;
    void updateTitle(std::string title);
    void updateAuthor(Author author);
    void updateLangage(std::string langage);
    void updateType(std::string type);
    void updatePostDate(Date post_date);
    void updateISBN(std::string isbn);
};

std::ostream& operator<<(std::ostream& os, const Book& b);

#endif