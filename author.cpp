#include "author.h"

int Author::nextId = 0;

Author::Author(std::string last_name, std::string first_name, Date birthday)
    : _id(++nextId), _last_name(last_name), _first_name(first_name), _birthday(birthday) {}

int Author::id() const {
    return _id;
}

std::string Author::lastName() const {
    return _last_name;
}

std::string Author::firstName() const {
    return _first_name;
}

Date Author::birthday() const {
    return _birthday;
}

void Author::updateLastName(std::string last_name) {
    _last_name = last_name;
}

void Author::updateFirstName(std::string first_name) {
    _first_name = first_name;
}

void Author::updateBirthday(Date birthday) {
    _birthday = birthday;
}

std::ostream& operator<<(std::ostream& os, const Author& a){
    os << "L'auteur numero " << a.id() << ", " << a.firstName() << " " << a.lastName() << " né le " << a.birthday();
    return os;
}