#include <iostream>
#include <string>
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
int main() {
    int dec, scelta;
    cout << "Convertirore in Ottale Esadecimale "<< endl;
    cout << "Inserisci un numero decimale: ";
    cin >> dec;
    cout << "\nScegli la base di destinazione:"<< endl;
    cout << "1. Binario (Base 2)"<< endl;
    cout << "2. Ottale (Base 8)"<< endl;
    cout << "3. Esadecimale (Base 16)"<< endl;
    cout << "Scelta: ";
    cin >> scelta;
    switch (scelta) {
        case 1:
            cout << "In Binario: "<< DaDecimaleAconvertito(dec, 2) << endl;
            break;
        case 2:
            cout << "In Ottale: "<< DaDecimaleAconvertito(dec, 8) << endl;
            break;
        case 3:
            cout << "In Esadecimale: "<< DaDecimaleAconvertito(dec, 16) << endl;
            break;
        default:
            cout << "Scelta non valida!"<< endl;
    }
    return 0;
}