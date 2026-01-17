#include <iostream><< endl;



using namespace std;

float addition(float zahl1, float zahl2);
int main() {
    int wahl = 0;

    cout << "Taschenrechner"  << endl;
    cout << "1 fuer Addition"  << endl;
    cout << "2 fuer Subtraktion"  << endl;
    cout << "3 fuer Multiplikation"  << endl;
    cout << "4 fuer Division" <<  endl;
    cin >> wahl;

    switch (wahl) {
        case 1:
            cout << "Gruppenmitglied 1 kann hier die Addition implementieren."  << endl;
            // hier Funktion für Addition einfügen
        float zahl1;
        float zahl2;
        float resultat;
        cout << "Geben Sie 1.Zahl ein" << endl;
        cin >> zahl1;
        cout << "Geben Sie 2.Zahl ein" << endl;
        cin >> zahl2;
        resultat = zahl1 + zahl2;
        cout << "Resultat: " << resultat << endl;
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