#include <iostream>
using namespace std;

int main(){
    int nilai;
    string index, keterangan;

    cout<< "Masukan nilai anda : ";
    cin>> nilai;

    if (nilai >= 60){
        keterangan = "Selamat anda dinyatakan LULUS.";

        if (nilai >= 80){
            index = "A";
        } else if (nilai >= 70){
            index = "B";
        } else{
            index = "C";
        }
    } else{
        keterangan = "Maaf anda belum lulus";
        if (nilai >= 40){
            index = "D";
        } else {
            index = "E";
        }
    }
    cout<< "Status = "<<keterangan<<endl;
    cout<< "Index Nilai = "<<index<<endl;
}
