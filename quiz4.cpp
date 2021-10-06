#include <iostream>
using namespace std;

int main(){
//KAMUS
    int N, i, sum;
//ALGORITMA
    N = 20;             //deklarasi awal
    sum = 0;            //inisialisasi
    i = 0;              //inisialisasi
    while(i <= N){      //Kondisi
        i = i + 5;      //aksi
        sum = sum + i;  //aksi
    } //i > N
    cout << sum << endl;
    return 0;

}
