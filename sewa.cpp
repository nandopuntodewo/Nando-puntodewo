#include <iostream>
using namespace std;

int main(){
    int durasi, total_pembayaran, lama_sewa_1, lama_sewa_2, lama_sewa_3, harga_sewa_1, harga_sewa_2, harga_sewa_3;
    int total_1, total_2, total_3;

    cout<<"PROGRAM MENGHITUNG BIAYA PENYEWAAN"<<endl;
    cout<<"=================================="<<endl;
    cout<<endl;

    cout<<"Durasi penyewaan anda : ";
    cin>> durasi ;

    // Harga penyewaan berdasarkan jam
    harga_sewa_1 = 1000;
    harga_sewa_2 = 400;
    harga_sewa_3 = 300;

    // Proses penentuan tarif sewa
    if (durasi <= 2){
        lama_sewa_1 = durasi;
        total_1 = durasi * harga_sewa_1;

    } else if (durasi <= 12){
        lama_sewa_1 = 2;
        lama_sewa_2 = durasi - lama_sewa_1;
        total_2 = harga_sewa_1*2+lama_sewa_2*harga_sewa_2;

    } else {
        lama_sewa_1 = 2;
        lama_sewa_2 = 10;
        lama_sewa_3 = durasi - lama_sewa_2 - lama_sewa_1;
        total_3 = harga_sewa_1*2+harga_sewa_2*10+lama_sewa_3*harga_sewa_3;
    }
        total_pembayaran = total_1+total_2+total_3;


    cout<<"Total yang harus anda bayar adalah sebesar Rp "<<total_pembayaran<<endl;

    }
