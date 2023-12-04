#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "date.h"

class Person{
  private:
    static int nextId;
    int _id;
    std::string _last_name;
    std::string _first_name;

  public:
    Person(std::string last_name, std::string first_name);
    int id() const;
    std::string lastName() const;
    std::string firstName() const;
    void updateLastName(std::string last_name);
    void updateFirstName(std::string fisrt_name);
};

std::ostream& operator<<(std::ostream& os, const Person& p);

#endif