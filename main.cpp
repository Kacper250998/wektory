#include <iostream>
#include "wector.h"

using namespace std;

void menu() {
    cout << "Wybierz opcje:" << endl;
    cout << "1 - Oblicza dlugosc wektora i kat" << endl;
    cout << "2 - Oblicza wspolrzedne X i Y wektora" << endl;
    cout << "3 - Dodaj dwa wektory" << endl;
    cout << "4 - Odejmij dwa wektory" << endl;
    cout << "5 - Iloczyn skalarny dwoch wektorow" << endl;
    cout << "6 - Wyjscie" << endl;
}

int main() {
    int k;
    menu();
    cin >> k;
    switch (k) {
        case 1: {
            int x, y;
            cout << "Podaj wspolrzedna X konca wektora: ";
            cin >> x;
            cout << "Podaj wspolrzedna Y konca wektora: ";
            cin >> y;

            Wector wector("Wector", x, y);

            cout << "Figure: " << wector.getName() << endl;
            cout << "Dlugosc wektora: " << wector.getLength() << endl;
            cout << "Kat wektora: " << wector.getAlfa() << endl;
            break;
        }
        case 2: {
            double a, alfa;
            cout << "Podaj dlugosc wektora: ";
            cin >> a;
            cout << "Podaj kat wektora (w radianach): ";
            cin >> alfa;

            Wector2 wector2("Wector2", a, alfa);

            cout << "Figure: " << wector2.getName() << endl;
            cout << "Wspolrzedna X wektora: " << wector2.getXlength() << endl;
            cout << "Wspolrzedna Y wektora: " << wector2.getYlength() << endl;
            break;
        }
        case 3: {
            int x, y;
            double a, alfa;
            cout << "Podaj wspolrzedna X pierwszego wektora: ";
            cin >> x;
            cout << "Podaj wspolrzedna Y pierwszego wektora: ";
            cin >> y;
            Wector wector1("Wector1", x, y);

            cout << "Podaj dlugosc drugiego wektora: ";
            cin >> a;
            cout << "Podaj kat drugiego wektora (w radianach): ";
            cin >> alfa;
            Wector2 wector2("Wector2", a, alfa);
            Wector wector2Converted("Wector2Converted", wector2.getXlength(), wector2.getYlength());

            Wector wynik = wector1.add(wector2Converted);
            cout << "Wynikowy wektor po dodaniu: (" << wynik.getX() << ", " << wynik.getY() << ")" << endl;
            break;
        }
        case 4: {
            int x, y;
            double a, alfa;
            cout << "Podaj wspolrzedna X pierwszego wektora: ";
            cin >> x;
            cout << "Podaj wspolrzedna Y pierwszego wektora: ";
            cin >> y;
            Wector wector1("Wector1", x, y);

            cout << "Podaj dlugosc drugiego wektora: ";
            cin >> a;
            cout << "Podaj kat drugiego wektora (w radianach): ";
            cin >> alfa;
            Wector2 wector2("Wector2", a, alfa);
            Wector wector2Converted("Wector2Converted", wector2.getXlength(), wector2.getYlength());

            Wector wynik = wector1.subtract(wector2Converted);
            cout << "Wynikowy wektor po odjeciu: (" << wynik.getX() << ", " << wynik.getY() << ")" << endl;
            break;
        }
        case 5: {
            int x, y;
            double a, alfa;
            cout << "Podaj wspolrzedna X pierwszego wektora: ";
            cin >> x;
            cout << "Podaj wspolrzedna Y pierwszego wektora: ";
            cin >> y;
            Wector wector1("Wector1", x, y);

            cout << "Podaj dlugosc drugiego wektora: ";
            cin >> a;
            cout << "Podaj kat drugiego wektora (w radianach): ";
            cin >> alfa;
            Wector2 wector2("Wector2", a, alfa);
            Wector wector2Converted("Wector2Converted", wector2.getXlength(), wector2.getYlength());

            cout << "Iloczyn skalarny dwoch wektorow: " << wector1.dotProduct(wector2Converted) << endl;
            break;
        }
        case 6:
            cout << "Wyjscie z programu." << endl;
            break;
        default:
            cout << "Nieprawidlowa opcja." << endl;
            break;
    }

    return 0;
}
