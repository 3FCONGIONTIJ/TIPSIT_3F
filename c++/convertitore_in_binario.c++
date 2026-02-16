#include <iostream>
#include <string>
using namespace std;
int main() {
    int scelta;
    cout << "Convertitore in Binario" << endl;
    cout << "1. Decimale->Binario" << endl;
    cout << "2. Binario->Decimale" << endl;
    cout << "Scegli un'opzione: ";
    cin >> scelta;
    switch (scelta) {        
        case 1: { 
            int n;
            string binario = "";
            cout << "Inserisci numero decimale: ";
            cin >> n;
            if (n == 0) {
                binario = "0";
            } else {
                while (n > 0) {
                    if (n % 2 == 0) binario = "0" + binario;
                    else binario = "1" + binario;
                    n = n / 2;
                }
            }
            cout << "Risultato in binario: " << binario << endl;
            break; 
        }
        case 2: { 
            string bin;
            int decimale = 0;
            int base = 1;
            cout << "Inserisci numero binario: ";
            cin >> bin;
            for (int i = bin.length() - 1; i >= 0; i--) {
                if (bin[i] == '1') {
                    decimale += base;
                }
                base *= 2;
            }
            cout << "Risultato in decimale: " << decimale << endl;
            break;
        }
        default:
            cout << "Opzione non valida!" << endl;
            break;
    }
    return 0;
}