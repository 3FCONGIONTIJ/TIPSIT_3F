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
int DaConvertitoAdecimale (int base, string codice){
    string simboli = "0123456789ABCDEF";
    int n = codice.length();
    int decimale = 0;
    int j;
    if (base == 2){
       for ( n ; n>0 ; n-- ){
        if (codice [n]>0)
            j=codice [n]^2;
        decimale=decimale+j;
       }
    }
    if (base == 8){
           for ( n ; n>0 ; n-- ){
        if (codice [n]>0)
            j=codice [n]^8;
        decimale=decimale+j;
       }
    }
    if (base == 16){
        for ( n ; n>0 ; n-- ){
        if (codice [n]>0)
            j=codice [n]^16;
        decimale=decimale+j;
       }
    }
    else {
        cout << "Base non valida";
    }
}
int main() {
    int dec1, scelta1, dec2, scelta2, l, dec, 
    string codice;
    cout << "1.Convertire in Binario/Esadecimale/Ottale " << endl;
    cout << "2.convertire da Binario/Ottale/Esadecimale in Decimale" << endl;
    cin >> dec1;
    if (dec1 == 1){
            cout << "Inserisci un numero decimale: ";
            cin >> dec2;
    cout << "\nScegli la base di destinazione:"<< endl;
    cout << "1. Binario (Base 2)"<< endl;
    cout << "2. Ottale (Base 8)"<< endl;
    cout << "3. Esadecimale (Base 16)"<< endl;
    cout << "Scelta: ";
    cin >> scelta2;
    switch (scelta2) {
        case 1:
            cout << "In Binario: "<< DaDecimaleAconvertito(dec1, 2) << endl;
            break;
        case 2:
            cout << "In Ottale: "<< DaDecimaleAconvertito(dec1, 8) << endl;
            break;
        case 3:
            cout << "In Esadecimale: "<< DaDecimaleAconvertito(dec1, 16) << endl;
            break;
        default:
            cout << "Scelta non valida!"<< endl;
    }
} else if (dec1 == 2){
    cout << "Inserisci La lunghezza del codice" << endl;
    cin >> l;
    cout << "Inserire il codice (al contrario)" << endl;
    for (i=0;i<l;i++){ 
           cin << codice[i];
    }
    cout<<"inserire la base";
    cin >> base;
    dec=DaConvertitoAdecimale ( , codice)
} else {
    cout << "scelta sbagliata" << endl;
}
}
