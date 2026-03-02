#include <iostream>
#include <string>
#include <vector>

using namespace std;

string DaDecimaleAconvertito(int n, int base) {
    if (n == 0) return "0";
    string risultato = "";
    string simboli = "0123456789ABCDEF"; 
    while (n > 0) {
        int resto = n % base;
        risultato = simboli[resto] + risultato; 
        n = n / base;
    }
    return risultato;
}

int DaConvertitoAdecimale(int base, string codice) {
    string simboli = "0123456789ABCDEF";
    int decimale = 0;
    long long peso = 1; 

    for (int i = codice.length() - 1; i >= 0; i--) {
        int valoreDigit = 0;
        for (int k = 0; k < 16; k++) {
            if (toupper(codice[i]) == simboli[k]) {
                valoreDigit = k;
                break;
            }
        }
        decimale += valoreDigit * peso;
        peso *= base;
    }
    return decimale;
}

int main() {
    int sceltaMenu, numeroDec, sceltaBase, l;
    string codiceInput;

    cout << "1. Convertire da Decimale a Binario/Esadecimale/Ottale" << endl;
    cout << "2. Convertire da Binario/Ottale/Esadecimale in Decimale" << endl;
    cout << "Scelta: ";
    cin >> sceltaMenu;

    if (sceltaMenu == 1) {
        cout << "Inserisci un numero decimale: ";
        cin >> numeroDec;
        cout << "\nScegli la base di destinazione:" << endl;
        cout << "1. Binario (Base 2)\n2. Ottale (Base 8)\n3. Esadecimale (Base 16)" << endl;
        cout << "Scelta: ";
        cin >> sceltaBase;

        int baseEffettiva = (sceltaBase == 1) ? 2 : (sceltaBase == 2) ? 8 : 16;
        cout << "Risultato: " << DaDecimaleAconvertito(numeroDec, baseEffettiva) << endl;

    } else if (sceltaMenu == 2) {
        int baseScelta;
        cout << "Inserire la base di partenza (2, 8, 16): ";
        cin >> baseScelta;
        cout << "Inserisci la lunghezza del codice: ";
        cin >> l;
        cout << "Inserire il codice: ";
        cin >> codiceInput; 

        int dec = DaConvertitoAdecimale(baseScelta, codiceInput);
        cout << "Il valore in decimale e': " << dec << endl;
    } else {
        cout << "Scelta sbagliata" << endl;
    }

    return 0;
}