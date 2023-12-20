#include "library.h"

Library::Library(std::string name):_name(name){}

void Library::addAuthor(Author& author){
  _authors.push_back(author);
}

void Library::addBook(Book& book){
  _books.push_back(book);
}

void Library::addReader(Reader& reader){
  _readers.push_back(reader);
}

bool Library::borrowBook(Reader& reader, Book& book){
  if(!book.borrowed()){
    // Get the current time point
    auto currentTime = std::chrono::system_clock::now();

    // Convert the time point to a time_t object
    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(currentTime);

    // Convert the time_t to a struct tm
    struct std::tm* currentTimeInfo = std::localtime(&currentTime_t);

    // Print the current date
    std::cout << "Current Date: " << (currentTimeInfo->tm_year + 1900) << '-'
              << (currentTimeInfo->tm_mon + 1) << '-'
              << currentTimeInfo->tm_mday << std::endl;

    Date current_date(currentTimeInfo->tm_mday, (currentTimeInfo->tm_mon + 1), (currentTimeInfo->tm_year + 1900));

    Loan loan(current_date, book.isbn(), reader.id());

    _loans.push_back(loan);
    book.addBorrower(reader.id());
    book.updateBorrowed(true);
    reader.addBorrowedBook(book);
    return true;
  }
  return false;
}

void Library::returnBook(Reader& reader, Book& book){
  _loans.erase(std::remove_if(_loans.begin(), _loans.end(), [reader, book](Loan loan) {
    return (loan.readerID()==reader.id() && loan.bookISBN()==book.isbn());
  }), _loans.end());

  reader.removeBorrowedBook(book);
  book.updateBorrowed(false);
}

std::vector<Book> Library::books() const{
  return _books;
}

std::string Library::name() const{
  return _name;
}

std::vector<Author> Library::authors() const{
  return _authors;
}

std::vector<Reader> Library::readers() const{
  return _readers;
}

std::vector<Loan> Library::loans() const{
  return _loans;
}

std::ostream& operator<<(std::ostream& os, const Library& library){
  os << std::endl << std::endl << "NOM DE LA BIBLIOTHEQUE" << std::endl;
  os << "#########################################################" << std::endl;
  os << library.name() << std::endl;

  os << std::endl << std::endl << "LES AUTEURS" << std::endl;
  os << "#########################################################" << std::endl;
  for(auto author:library.authors()){
    os << author << std::endl;
  }

  os << std::endl << std::endl << "LES LIVRES" << std::endl;
  os << "#########################################################" << std::endl;
  for(auto book:library.books()){
    os << book << std::endl;
  }

  os << std::endl << std::endl << "LES LECTEURS" << std::endl;
  os << "#########################################################" << std::endl;
  for(auto reader:library.readers()){
    os << reader << std::endl;
  }

  os << std::endl << std::endl << "LES EMPRUNTS" << std::endl;
  os << "#########################################################" << std::endl;
  for(auto loan:library.loans()){
    os << loan << std::endl;
  }
  return os;
}