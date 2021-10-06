#include <iostream>
using namespace std;
int main () {
    string nama;
    char golongan;
    int jam_kerja, gaji_per_jam, gaji_tetap, total_gaji_per_jam;
    int jumlah_jam_lembur, gaji_lembur_per_jam, total_gaji_pokok, total_gaji_lembur, total_gaji;

    cout << "PROGRAM MENGHITUNG TOTAL GAJI KARYAWAN PT SUKSES BERAT" << endl;
    cout << "=======================================================" << endl;
    cout << endl;

    // Proses input
    cout << "Nama Karyawan : ";
    getline(cin,nama);
    cout << "Golongan : ";
    cin  >> golongan;
    cout << "jam kerja : ";
    cin  >> jam_kerja;

    // Menentukan gaji tetap setiap golongan
       switch(golongan){
       case '1' :
          gaji_tetap = 1500000;
          break;
       case '2' :
          gaji_tetap = 1750000;
          break;
       case '3' :
         gaji_tetap = 2000000;
          break;
       case '4' :
          gaji_tetap = 2500000;
          break;
       case '5' :
          gaji_tetap = 3000000;
          break;
    }

    // Menentukan jumlah upah per jam pada setiap golongam
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

       cout << "=======================================================" << endl;
       cout << endl;

    // Menentukan total gaji pokok
       total_gaji_per_jam = jam_kerja * gaji_per_jam;
       total_gaji_pokok = gaji_tetap + total_gaji_per_jam;

       cout << "Gaji tetap : Rp " << gaji_tetap << endl;
       cout << "Jumlah jam kerja (bulan) : " << jam_kerja << endl;
       cout << "Gaji per jam : Rp " << gaji_per_jam << endl;
       cout << "Total gaji per jam : Rp " << total_gaji_per_jam << endl;
       cout << "Total gaji pokok yang diterima dalam sebulan adalah Rp " << total_gaji_pokok << endl;

       cout << "=======================================================" << endl;
       cout << endl;

    // Menentukan total gaji lembur

       if (jam_kerja > 120) {
        jumlah_jam_lembur = jam_kerja - 120;
        gaji_lembur_per_jam = 1.5*gaji_per_jam;
        total_gaji_lembur = jumlah_jam_lembur * gaji_lembur_per_jam;
       }
       cout << "Jumlah jam lembur (bulan) : " << jumlah_jam_lembur << endl;
       cout << "Gaji lembur per jam : Rp " << gaji_lembur_per_jam << endl;
       cout << "Total gaji lembur yang diterima dalam sebulan adalah Rp " << total_gaji_lembur << endl;

       cout << "=======================================================" << endl;
       cout << endl;

    // Menentukan total gaji
       total_gaji = total_gaji_pokok + total_gaji_lembur;

       cout << "Total gaji yang diterima dalam sebulan adalah Rp " << total_gaji << endl;

}

