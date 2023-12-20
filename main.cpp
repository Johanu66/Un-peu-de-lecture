#include <iostream>
#include "date.h"
#include "author.h"
#include "book.h"
#include "reader.h"
#include "library.h"

int main(){
  Library library("Bibliothèque principale");
  Date d1(4,12,2004), d2(4,12,2024);

  Author author1("Johanu", "GANDONOU", d1);
  library.addAuthor(author1);
  Author author2("Marel", "AGONGLO", d1);
  library.addAuthor(author2);
  Author author3("Amos", "AMOND", d1);
  library.addAuthor(author3);
  Author author4("Innocent", "LOKOSSOU", d1);
  library.addAuthor(author4);
  Author author5("Armelle", "AKOUTEY", d1);
  library.addAuthor(author5);

  Book book1("La fin du monde", author1, "Anglais", "Science Fiction", d2, "0593359445");
  library.addBook(book1);
  Book book2("Good Food", author1, "Anglais", "Cuisine", d2, "01649696319");
  library.addBook(book2);
  Book book3("Les bases du Français", author1, "Francais", "Literature", d2, "49416146694");
  library.addBook(book3);
  Book book4("La vérité sur le mariage", author2, "Anglais", "Mariage", d2, "14966946316");
  library.addBook(book4);
  Book book5("De l'amour à la haine", author2, "Japonnais", "Amour", d2, "149412364493");
  library.addBook(book5);
  Book book6("Les intégrales", author3, "Chinois", "Mathematique", d2, "054849633494");
  library.addBook(book6);
  Book book7("Nourriture de qualité", author3, "Chinois", "Cuisine", d2, "6449461649");
  library.addBook(book7);
  Book book8("Diode Transistor", author3, "Allemand", "Electronique", d2, "849463131649");
  library.addBook(book8);
  Book book9("Du Science Fiction à la réalité", author4, "Anglais", "Science Fiction", d2, "15116134911");
  library.addBook(book9);
  Book book10("HTML, CSS et JS", author4, "Anglais", "Developement Web", d2, "6264946315");
  library.addBook(book10);
  Book book11("Dieu avant tout", author4, "Francais", "Religion", d2, "016114999532");
  library.addBook(book11);
  Book book12("Amour infini", author5, "Allemand", "Amour", d2, "36419166161");
  library.addBook(book12);
  Book book13("De la haine à l'amour", author5, "Francais", "Amour", d2, "494316946199");
  library.addBook(book13);
  Book book14("Sécurté informatique", author5, "Allemand", "Informatique", d2, "4951649664161");
  library.addBook(book14);

  Reader reader1("Anna", "BEZEN");
  library.addReader(reader1);
  Reader reader2("Junior", "MANDANE");
  library.addReader(reader2);
  Reader reader3("Neil", "MOBON");
  library.addReader(reader3);
  Reader reader4("Lory", "AZOM");
  library.addReader(reader4);

  library.borrowBook(reader1, book10);
  library.borrowBook(reader2, book9);
  library.borrowBook(reader3, book11);
  library.borrowBook(reader4, book1);
  library.borrowBook(reader1, book10);
  library.borrowBook(reader2, book4);
  library.borrowBook(reader3, book6);
  library.borrowBook(reader4, book2);

  std::cout << library << std::endl;

  return 0;
}