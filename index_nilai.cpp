#include <iostream>
#include <string>

using namespace std;

int main(){
    int nilai;
    string index;

    cout << "Masukan nilai anda : ";
    cin >> nilai;

    if(nilai >= 80){
        index = "A";
    } else if(nilai >= 70){
        index = "B";
    } else if(nilai >= 60){
        index = "C";
    } else if(nilai >= 40){
        index = "D";
    } else{
        index = "E";
    }

    cout << "Nilai anda = " << nilai << endl;
    cout << "Index = " << index << endl;

}

