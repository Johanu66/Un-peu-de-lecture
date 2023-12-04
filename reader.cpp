#include "reader.h"

Reader::Reader(std::string last_name, std::string first_name)
    : Person(last_name, first_name) { }

void Reader::addBorrowedBook(Book book){
  _borrowed_books_isbn.push_back(book.isbn());
}

void Reader::removeBorrowedBook(Book book){
  auto it = std::find(_borrowed_books_isbn.begin(), _borrowed_books_isbn.end(), book.isbn());

  if (it != _borrowed_books_isbn.end()) {
    _borrowed_books_isbn.erase(it);
  }
}

std::ostream& operator<<(std::ostream& os, const Reader& r){
  os << "Lecteur numéro : " << r.id() << ", " << r.firstName() << " " << r.lastName();
  return os;
}