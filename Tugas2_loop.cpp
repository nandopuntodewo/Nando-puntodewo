#include <iostream>
using namespace std;

int main(){
 int i = 1, N;

  cout << "Masukan angka yang akan di kalikan : ";
  cin >> N;

  do{
  cout<< i << " * " << N << " = ";
  cout << i*N << endl;
    i++;
} while (i<=10);

}
