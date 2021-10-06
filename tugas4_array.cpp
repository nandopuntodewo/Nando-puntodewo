#include<iostream>
using namespace std;

void jumlah(int, int);

int main(){
// deklarasi ( b = baris || k = kolom)
    int b, k;

// User Input
    cout << "Masukkan jumlah baris matriks : ";
    cin  >> b;
    cout << "Masukkan jumlah kolom matriks : ";
    cin  >> k;
    cout << endl;

// Pemanggil fungsi
    jumlah(b, k);
}

// Fungsi jumlah
void jumlah(int b, int k){

// Deklarasi kamus
    int M1[b][k], M2[b][k], S[b][k];

// Input nilai matriks dari user
    cout << "Masukkan elemen matriks pertama : " << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0;j < k;j++ ) {
            cout << "Masukkan nilai a" << i + 1 << j + 1 << ": ";
            cin >> M1[i][j];
        }
    } cout << endl;

    cout << "Masukkan elemen matriks kedua : " << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0;j < k;j++ ) {
            cout << "Masukkan nilai b" << i + 1 << j + 1 << ": ";
            cin >> M2[i][j];
        }
    } cout << endl;

// Menghitung penjumlahan matriks
    cout << "Hasil :" << endl;
    for (int i = 0; i < b; i++ ) {
        for (int j = 0; j < k; j++ ) {
            S[i][j] = M1[i][j]+ M2[i][j];

// Print hasil
            cout << " " << S[i][j];
            if (j == k - 1) {
                cout << endl;
            }
        }
    }
}
