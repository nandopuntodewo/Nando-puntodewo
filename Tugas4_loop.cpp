#include <iostream>
using namespace std;

int main(){
 int i = 1, N, sum;
 float rata;

 cout << "Masukan jumlah bilangan yang diinginkan : ";
 cin >> N;

for (int i = 1 ; i<=N ; i++)
    sum+=i;
cout << "jumlah dari bilangan yang anda masukan = "<< sum << endl;
rata = (float)sum / (float)N;
cout << "Rata-rata dari jumlah bilangan dalam deret adalah sebesar = "<< rata<< endl;

}

