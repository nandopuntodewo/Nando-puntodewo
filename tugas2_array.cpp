#include <iostream>
using namespace std;

int main(){
    //deklarasi kamus
    int i, bilangan[10], min, max, ganjil=0, genap=0;

    cout << "-----------------------------" << endl;
    cout << "# MASUKAN 10 Bilangan Bulat #" << endl;
    cout << "-----------------------------" << endl;

    // User input
    for (i=0;i<10;i++){
        cout << "Bilangan ke - " << i << " = ";
        cin >> bilangan[i];
    // Menentukan Minimal dan Maximal
        if (i == 0){
            min = bilangan[i];
            max = bilangan[i];
        } else if (min > bilangan[i]){
            min = bilangan[i];
        } else if (max < bilangan[i]){
            max = bilangan[i];
        } else {}
    }
    // Menentukan Ganjil dan Genap
    for (i=0;i<10;i++){
        if (bilangan[i]%2 == 0){
            genap++;
    } else {
        ganjil++;
    }
}
// print nilai maximal dan minimal
    cout << "Nilai minimal = " << min << endl;
    cout << "Nilai maksimal = " << max << endl;

// print jumlah bilangan ganjil dan genap
    cout << "Jumlah bilangan ganjil = " << ganjil << endl;
    cout << "Jumlah bilangan genap = " << genap << endl;

    return 0;
}
