#include "book.h"

Book::Book(std::string title, Author& author, std::string langage, std::string type, Date& post_date, std::string isbn)
    : _title(title), _author(author), _langage(langage), _type(type), _post_date(post_date), _isbn(isbn) {
}

std::string Book::title() const {
    return _title;
}

Author Book::author() const {
    return _author;
}

std::string Book::langage() const {
    return _langage;
}

std::string Book::type() const {
    return _type;
}

Date Book::postDate() const {
    return _post_date;
}

std::string Book::isbn() const {
    return _isbn;
}

void Book::updateTitle(std::string title) {
    _title = title;
}

void Book::updateAuthor(Author& author) {
    _author = author;
}

void Book::updateLangage(std::string langage) {
    _langage = langage;
}

void Book::updateType(std::string type) {
    _type = type;
}

void Book::updatePostDate(Date& post_date) {
    _post_date = post_date;
}

void Book::updateISBN(std::string isbn) {
    _isbn = isbn;
}

std::ostream& operator<<(std::ostream& os, const Book& b){
  os << "Titre : " << b.title() << std::endl;
  os << "Auteur : " << b.author() << std::endl;
  os << "Langue : " << b.langage() << std::endl;
  os << "Genre : " << b.type() << std::endl;
  os << "Date de publication : " << b.postDate() << std::endl;
  os << "ISBN : " << b.isbn() << std::endl;
  return os;
}

void Book::addBorrower(int reader_id){
  _previous_borrowers_id.push_back(reader_id);
}

std::vector<int> Book::previousBorrowerID() const{
  return _previous_borrowers_id;
}