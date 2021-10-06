#include <iostream>
using namespace std;

int main(){
//KAMUS
    float P, L, luas;

//ALGORITMA
    cout << "# Program menghitung luas bangun persegi empat #" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Syarat : Masukan nilai panjang dan lebar yang berupa bilangan real" << endl;
    cout << endl;

    cout << "Masukan panjang : ";
    cin >> P;
    cout << "Masukan lebar : ";
    cin >> L;


    //RUMUS
    if (P>=1 && L >= 1){
        cout << "Luas bangun segi empat dari panjang dan lebar yang anda input adalah : " << endl;
        luas = P*L;
        cout << "Panjang * Lebar = " << P << " * " << L << " = " << luas << endl;
    } else {
        cout << "Nilai yang anda masukan tidak memenuhi syarat" << endl;
    }

    return 0;
}
