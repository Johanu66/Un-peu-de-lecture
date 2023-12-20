#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "author.h"
#include "date.h"
#include <vector>

class Book{
  private:
    std::string _title;
    Author _author;
    std::string _langage;
    std::string _type;
    Date _post_date;
    std::string _isbn;
    std::vector<int> _previous_borrowers_id;
    bool _borrowed;
  public:
    Book(std::string title, Author& author, std::string langage, std::string type, Date& post_date, std::string isbn);
    std::string title() const;
    Author author() const;
    std::string langage() const;
    std::string type() const;
    Date postDate() const;
    std::string isbn() const;
    bool borrowed() const;
    void updateTitle(std::string title);
    void updateAuthor(Author& author);
    void updateLangage(std::string langage);
    void updateType(std::string type);
    void updatePostDate(Date& post_date);
    void updateISBN(std::string isbn);
    void updateBorrowed(bool borrowed);
    void addBorrower(int reader_id);
    std::vector<int> previousBorrowerID() const;
};

std::ostream& operator<<(std::ostream& os, const Book& b);

#endif