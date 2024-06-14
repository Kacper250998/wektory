#ifndef WECTOR_H
#define WECTOR_H
#include <string>

class Wector {
private:
    const std::string name;
    const double X;
    const double Y;

public:
    Wector(const std::string &n, double x, double y);
    double getLength() const;
    double getAlfa() const;
    double getX() const;
    double getY() const;
    Wector add(const Wector &other) const;
    Wector subtract(const Wector &other) const;
    double dotProduct(const Wector &other) const;
    std::string getName() const;
};

class Wector2 {
private:
    const std::string name;
    const double A;
    const double ALFA;

public:
    Wector2(const std::string &n, double a, double alfa);
    double getXlength() const;
    double getYlength() const;
    std::string getName() const;
};

#endif // WECTOR_H