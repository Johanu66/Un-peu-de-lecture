#include "author.h"

Author::Author(std::string last_name, std::string first_name, Date birthday)
    : _birthday(birthday), Person(last_name, first_name) { }

Date Author::birthday() const {
    return _birthday;
}

void Author::updateBirthday(Date birthday) {
    _birthday = birthday;
}

std::ostream& operator<<(std::ostream& os, const Author& a){
    os << "L'auteur numero " << a.id() << ", " << a.firstName() << " " << a.lastName() << " né le " << a.birthday();
    return os;
}