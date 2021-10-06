#include <iostream>
using namespace std;

int main (){
    // Deklarasi Kamus
    int i, tinggi [5], jumlah=0, ratarata;


    cout << "-----------------------------" << endl;
    cout << "# MASUKAN TINGGI BADAN ANAK #" << endl;
    cout << "-----------------------------" << endl;

    // User input
    for(i=0;i<=4;i++){
        cout << " Tinggi Anak ke - "<< i <<" = ";
        cin  >> tinggi[i];

    // Menghitung jumlah tinggi anak
        jumlah = jumlah + tinggi[i];
    }

    // Menghitung rata rata tinggi anak
    ratarata = (float)jumlah/(float)5;

    cout << endl;
    cout << "---------------------" << endl;
    cout << "# DATA TINGGI BADAN #" << endl;
    cout << "---------------------" << endl;
    cout << endl;

    // Print data tinggi anak
    for(i=0;i<=4;i++){
        cout <<" Tinggi anak ke- "<< i <<" = ";
        cout << tinggi[i] << " CM" << endl;
    }
   cout << endl;

   // Print rata rata tinggi anak
   cout << "Rata-rata tinggi anak adalah = " << ratarata << endl;

   
}
