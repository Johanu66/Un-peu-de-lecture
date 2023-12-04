#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
  private:
    int _jour;
    int _mois;
    int _annee;

  public:
    Date(int j, int m, int a);
    int jour() const;
    int mois() const;
    int annee() const;
    void setDate(int j, int m, int a);
};

std::ostream& operator<<(std::ostream& os, const Date& d);

#endif