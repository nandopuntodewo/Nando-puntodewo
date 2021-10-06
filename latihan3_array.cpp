#include <iostream>
using namespace std;

int main() {
    // Deklarasi Kamus
	int A[3][4];

    // User input nilai
    // b = baris , k = kolom
	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			  cout<<"A["<<b<<"]["<<k<<"] = ";
			  cin>>A[b][k];
		}
		cout << endl;
	}

    // Print Array nilai
	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			 cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
}
