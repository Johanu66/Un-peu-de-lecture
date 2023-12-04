#include <iostream>
#include "date.h"
#include "author.h"
#include "book.h"
#include "reader.h"

int main(){
  Date d1(4,12,2004), d2(4,12,2024);
  std::cout << "Nous somme le : " << d1 << std::endl;

  Author author("Johanu", "GANDONOU", d1);
  Book book("Titre", author, "Anglais", "Science Fiction", d2, "0593359445");
  std::cout << book << std::endl;

  Reader reader("Johanu", "GANDONOU");
  std::cout << reader << std::endl;
  return 0;
}