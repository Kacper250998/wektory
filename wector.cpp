#include "wector.h"
#include <cmath>

Wector::Wector(const std::string &n, double x, double y) : name(n), X(x), Y(y) {}

double Wector::getLength() const {
    return sqrt((X * X) + (Y * Y));
}

double Wector::getAlfa() const {
    return atan2(Y, X);
}

double Wector::getX() const {
    return X;
}

double Wector::getY() const {
    return Y;
}

Wector Wector::add(const Wector &other) const {
    return Wector("Result", X + other.getX(), Y + other.getY());
}

Wector Wector::subtract(const Wector &other) const {
    return Wector("Result", X - other.getX(), Y - other.getY());
}

double Wector::dotProduct(const Wector &other) const {
    return (X * other.getX()) + (Y * other.getY());
}

std::string Wector::getName() const {
    return name;
}

Wector2::Wector2(const std::string &n, double a, double alfa) : name(n), A(a), ALFA(alfa) {}

double Wector2::getXlength() const {
    return cos(ALFA) * A;
}

double Wector2::getYlength() const {
    return sin(ALFA) * A;
}

std::string Wector2::getName() const {
    return name;
}