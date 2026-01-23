#include <iostream>

using namespace std;

void addition();

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

            addition();
            
            break;
        case 2:
            cout << "Gruppenmitglied 1 kann hier die Subtraktion implementieren."  << endl;
            // hier Funktion für die Subtraktion einfügen
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

void addition() {
    int zahl1 = 0;
    int zahl2 = 0;
    cout << "Eingabe Zahl 1:"  << endl;    
    cin >> zahl1;
    cout << "Eingabe Zahl 2:"  << endl;
    cin >> zahl2;
    cout << "Resultat:" << zahl1 + zahl2 << endl;
    
}
