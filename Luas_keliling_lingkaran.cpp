#include <iostream>

using namespace std;

int main(){
    float r, luas, keliling;
    float phi = 3.14;

    cout<<"Masukan jari-jari Lingkaran = ";
    cin>>r;

    luas = phi*r*r;
    keliling = 2*phi*r;

    cout << "Diketahui sebuah lingkaran dengan jari-jari = "<<r<< endl;
    cout << "Maka luasnya sebesar = "<< luas << endl;
    cout << "dan Kelilingnya sebesar = " << keliling <<endl;

    }
