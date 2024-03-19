#include <iostream>
using namespace std;

int main() {

    int i;
    string nama[5];

    for (i = 7; i > 0; i--) {
        cout << i << "." << "Muhammad Abid" << endl;
    }

    for (i = 0; i < 5; i++) {
        cout << "masukan nama =";
        cin >> nama[i];
    }

    cout << endl;
        cout << "====================" << endl;
        cout << "KUMPULAN NAMA NAMA" << endl;


    for (i = 0; i < 5; i++) {
        cout << "Namanya adalah " << nama[i] << endl;
    }

}