#include "loan.h"

Loan::Loan(Date loan_date, std::string book_isbn, int reader_id)
    : _loan_date(loan_date), _book_isbn(book_isbn), _reader_id(reader_id) {
}

Date Loan::loanDate() const {
    return _loan_date;
}

std::string Loan::bookISBN() const {
    return _book_isbn;
}

int Loan::readerID() const {
    return _reader_id;
}

std::ostream& operator<<(std::ostream& os, const Loan& loan){
    os << "L'auteur " << loan.readerID() << " a emprunté le livre " << loan.bookISBN() << " le " << loan.loanDate() << std::endl;
    return os;
}