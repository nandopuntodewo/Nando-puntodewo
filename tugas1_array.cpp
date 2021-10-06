#include <iostream>
using namespace std;

int main(){
    // Deklarasi Kamus
    int i, bilangan[10], min, max;

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

    // Print nilai Minimal dan Maximal
    cout << "Nilai minimal = " << min << endl;
    cout << "Nilai maksimal = " << max << endl;

    return 0;
}
