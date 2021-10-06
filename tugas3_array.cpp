#include <iostream>
using namespace std;

int main(){
// Deklarasi kamus
    string kata;
    int n, i;
    bool palindrome = true;

// User input
    cout << "Program untuk Menentukan kata/kalimat Palindrom atau bukan" << endl;
    cout << "Input Kata : ";
    getline(cin, kata);
    n = kata.length();

// Menentukan Palindrom atau bukan
    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1]){
            palindrome = false;
            break;
        }
    }

// Print hasil
    if(palindrome == true) {
        cout << "Valid Palindrom";
    } else {
        cout << "Bukan Palindrom";
    }
}
