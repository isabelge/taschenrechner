#include <iostream>

using namespace std;
double zahl1;
double zahl2;
double Ergebnis;

// Funktionsdefinition für Addition
double addition(double a, double b) {
    return a + b;
}

int main() {
    int wahl = 0;

    cout << "Taschenrechner"  << endl;
    cout << "1 fuer Addition"  << endl;
    cout << "2 fuer Subtraktion"  << endl;
    cout << "3 fuer Multiplikation"  << endl;
    cout << "4 fuer Division"  << endl;

    cin >> wahl;

    switch (wahl) {
        case 1:
            cout << "Gruppenmitglied 1 kann hier die Addition implementieren."  << endl;
            cout << "Addition ausgewaehlt" << endl;

            cout << "Bitte erste Zahl eingeben: ";
            cin >> zahl1;

            cout << "Bitte zweite Zahl eingeben: ";
            cin >> zahl2;

            cout << "Ergebnis: " << addition(zahl1, zahl2) << endl;
            break;
        case 2:

        cout << "Bitte die 1. Zahl eingeben." <<endl;
        cin >> zahl1;
        cout << "Bitte die 2. Zahl eingeben." <<endl;
        cin >> zahl2;

        Ergebnis = zahl1 - zahl2;
        cout <<"Das Ergebnis betraegt:" << Ergebnis << endl;

            break;
        case 3:
            cout << "Gruppenmitglied 1 kann hier die Multiplikation implementieren."  << endl;
            // hier die Funktion für die Multiplikation einfügen
            break;
        case 4:
            cout << "Gruppenmitglied 1 kann hier die Division implementieren."  << endl;
            // hier die Funktion für die Division einfügen
            break;
        default:
            cout << "Falsche Auswahl, das Programm wird beendet."  << endl;
            break;
    }


    return 0;
}