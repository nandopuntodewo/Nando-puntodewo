#include <iostream>
using namespace std;

int main() {
    // Deklarasi kamus
	int nilai[3][4], sum;
	float ratarata;

	// User input nilai
    // b = baris , k = kolom
	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			  cout<<"nilai["<<b<<"]["<<k<<"] = ";
			  cin>>nilai[b][k];
    // Menghitung jumlah nilai
			  sum = sum + nilai[b][k];
		}
		cout << endl;
	}

	// Print Array Nilai
	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			 cout<<nilai[b][k]<<" ";
		}
		cout << endl;
		}
    // Menghitung rata-rata
	ratarata = (float)sum / (float)12;

	// Print hasil rata-rataAA
	cout << "Rata-rata nilai mahasiswa = " << ratarata << endl;

}
