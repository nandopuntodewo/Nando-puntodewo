#include <iostream>
using namespace std;

int main(){
//KAMUS
   int P, L;
//ALGORITMA
    cout << "# Program untuk menentukan nama bangun datar #" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Syarat : Masukan nilai panjang dan lebar yang berupa bilangan real" << endl;
    cout << endl;

    cout << "Masukan panjang : ";
    cin >> P;
    cout << "Masukan lebar : ";
    cin >> L;

    if (P == L && P>0 && L>0){
        cout << "Bangun datar Bujur Sangkar";
    } else if(P != L && P>0 && L>0){
        cout << "Bangun datar Persegi Panjang";
    } else {
        cout << "Tidak diketahui";
    }


return 0;
}
