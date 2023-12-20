#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include "date.h"
#include <string>

class Loan{
  private:
    Date _loan_date;
    std::string _book_isbn;
    int _reader_id;
  public:
    Loan(Date loan_date, std::string book_isbn, int reader_id);
    Date loanDate() const;
    std::string bookISBN() const;
    int readerID() const;
};

std::ostream& operator<<(std::ostream& os, const Loan& loan);

#endif