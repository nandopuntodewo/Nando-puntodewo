#include <iostream>
using namespace std;

int main(){
char index;
string keterangan;

cout<< "masukan nilai anda : ";
cin >> index;

switch(index){
    case 'A':
        keterangan = "Exelent";
        break;
    case 'B':
        keterangan = "Good";
        break;
    case 'C':
        keterangan = "Fair";
        break;
    case 'D':
        keterangan = "Poor";
        break;
        default:
        keterangan = "Tidak diketahui";
    }
    cout<<keterangan<<endl;
}
