#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>
#include "date.h"

class Author{
  private:
    static int nextId;
    int _id;
    std::string _last_name;
    std::string _first_name;
    Date _birthday;

  public:
    Author(std::string last_name, std::string first_name, Date birthday);
    int id() const;
    std::string lastName() const;
    std::string firstName() const;
    Date birthday() const;
    void updateLastName(std::string last_name);
    void updateFirstName(std::string fisrt_name);
    void updateBirthday(Date birthday);
};

std::ostream& operator<<(std::ostream& os, const Author& b);

#endif