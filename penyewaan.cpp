#include <iostream>
using namespace std;

int main(){
    int durasi, total, lama_sewa_1, lama_sewa_2, lama_sewa_3, harga_sewa_1, harga_sewa_2, harga_sewa_3;

    cout << "Durasi penyewaan anda = " << durasi;
    cin >> durasi;

    if (durasi <= 2){
        lama_sewa_1 = durasi;
        harga_sewa_1 = lama_sewa_1*1000;
    } else if (durasi > 2){
        lama_sewa_2 = durasi - 2;
        harga_sewa_2 = lama_sewa_2 * 400;
    } else if(durasi > 12){
       lama_sewa_3 = durasi - 12;
       harga_sewa_3 = lama_sewa_3 * 300;
    }
        total = harga_sewa_1 + harga_sewa_2 + harga_sewa_3;

    cout<<"Total yang harus anda bayar adalah sebesar Rp "<<total<<endl;
    }
