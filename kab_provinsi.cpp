#include <iostream>

using namespace std;

int main(){
        string kabupaten;

        cout<< "Masukan kabupaten asal : ";
        cin>> kabupaten;

        if (kabupaten == "Sleman" || kabupaten == "Bantul"){
            cout<< "Anda berasal dari Provinsi D.I. Yogyakarta.";
        } else{
            cout<< "Kemungkinan anda berasal dari Provinsi lain.";
        }

}
