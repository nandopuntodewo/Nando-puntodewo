#include <iostream>

using namespace std;

int main()
{
 cout << "##  Program C++ Deret Angka  ##" << endl;
 cout << "===============================" << endl;
 cout << endl;

 int i, min, max;

 cout << "Masukan angka minimal : ";
 cin >> min;
 cout << "Masukan angka maksimal : ";
 cin >> max;

 cout << "Deret bilangan dari "<< min << " sampai " << max << endl;

 cout << endl;
 for (i= min;i<= max;i++) {
    cout << i << " ";
 }

 cout << endl;
 return 0;
}
