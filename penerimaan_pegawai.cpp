#include <iostream>
using namespace std;

int main(){

int nilai, umur;

    cout<<"Masukan nilai anda : ";
    cin>>nilai;
    cout<<"Masukan umur anda : ";
    cin>>umur;

    if (nilai >= 250 && umur <= 35){
        cout<< "selamat, anda diterima sebagai pegawai";
    } else{
        cout<< "Mohon maaf, anda belum memenuhi syarat";
    }

}
