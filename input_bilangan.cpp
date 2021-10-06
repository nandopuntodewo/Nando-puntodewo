# include <iostream>
using namespace std;

int main(){
    int genap;
    int ganjil;
    int bil;

    cout<<"Masukkan Bilangan : ";
    cin>> bil;

    if (bil % 2){
        ganjil;
        cout<< "Angka " << bil << " adalah bilangan ganjil";
    }  else {
    genap;
        cout<< "Angka " << bil << " adalah bilangan genap";
    }

}
