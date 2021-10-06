#include <iostream>
using namespace std;

int main (){
    // Deklarasi Kamus
    int i, tinggi [5];
    cout << "-----------------------------" << endl;
    cout << "# MASUKAN TINGGI BADAN ANAK #" << endl;
    cout << "-----------------------------" << endl;

    // User input
    for(i=0;i<=4;i++){
        cout << " Tinggi Anak ke - "<< i <<" = ";
        cin  >> tinggi[i];
    }
    cout << endl;
    cout << "---------------------" << endl;
    cout << "# DATA TINGGI BADAN #" << endl;
    cout << "---------------------" << endl;
    cout << endl;

    // Print Hasil
    for(i=0;i<=4;i++){
        cout <<" Tinggi anak ke- "<< i <<" = ";
        cout << tinggi[i] <<endl;
    }
}
