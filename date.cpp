#include "date.h"

Date::Date(int j, int m, int a) : _jour(j), _mois(m), _annee(a) {}

int Date::jour() const { return _jour; };

int Date::mois() const { return _mois; };

int Date::annee() const { return _annee; };

void Date::setDate(int j, int m, int a) {
    _jour = j;
    _mois = m;
    _annee = a;
}

std::ostream& operator<<(std::ostream& os, const Date& d) {
    os << d.jour() << "/" << d.mois() << "/" << d.annee();
    return os;
}