#include "person.h"

int Person::nextId = 0;

Person::Person(std::string last_name, std::string first_name)
  : _id(++nextId), _last_name(last_name), _first_name(first_name) {}

int Person::id() const {
  return _id;
}

std::string Person::lastName() const {
  return _last_name;
}

std::string Person::firstName() const {
  return _first_name;
}

void Person::updateLastName(std::string last_name) {
  _last_name = last_name;
}

void Person::updateFirstName(std::string first_name) {
  _first_name = first_name;
}

std::ostream& operator<<(std::ostream& os, const Person& p){
  os << p.id() << ", " << p.firstName() << " " << p.lastName();
  return os;
}