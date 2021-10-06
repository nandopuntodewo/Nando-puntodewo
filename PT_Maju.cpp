#include <iostream>
using namespace std;

int main(){
    char golongan;
    int jam_kerja, gaji_per_jam, total_gaji;

    cout << "PROGRAM MENGHITUNG TOTAL GAJI KARYAWAN PT MAJU "<<endl;
    cout << "==============================================="<<endl;
    cout << endl;

    cout << "Masukan golongan anda : ";
    cin >> golongan;
    cout << "Masukan jam kerja anda selama sebulan : ";
    cin >> jam_kerja;

    // Menentukan gaji per jam
        switch(golongan){
        case '1' :
            gaji_per_jam = 10000;
            break;
        case '2' :
            gaji_per_jam = 12500;
            break;
        case '3' :
            gaji_per_jam = 15000;
            break;
        case '4' :
            gaji_per_jam = 17500;
            break;
        case '5' :
            gaji_per_jam = 20000;
            break;
        }
    // Menentukan total gaji
        total_gaji = jam_kerja * gaji_per_jam;

        cout << "Total gaji yang anda terima dalam satu bulan adalah : Rp "<< total_gaji <<endl;
    }


