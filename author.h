#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>
#include "date.h"
#include "person.h"

class Author: public Person{
  private:
    Date _birthday;

  public:
    Author(std::string last_name, std::string first_name, Date birthday);
    Date birthday() const;
    void updateBirthday(Date birthday);
};

std::ostream& operator<<(std::ostream& os, const Author& b);

#endif