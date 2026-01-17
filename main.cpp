#include <iostream>

using namespace std;

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
            // hier Funktion für Addition einfügen
            break;
        case 2:
            cout << "Gruppenmitglied 1 kann hier die Subtraktion implementieren."  << endl;
            // hier Funktion für die Subtraktion einfügen
            break;
        case 3:
            float zahl1;
            float zahl2;
            cout << "Gruppenmitglied 1 kann hier die Multiplikation implementieren."  << endl;
            // hier die Funktion für die Multiplikation einfügen
            cout << "Zahl 1 eingeben: "  << endl;
            cin >> zahl1;
            cout << "Zahl 2 eingeben: "  << endl;
            cin >> zahl2;
            cout << zahl1 << " * " << zahl2 << "= " << zahl1*zahl2 << endl;
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