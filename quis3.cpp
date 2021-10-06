#include <iostream>
using namespace std;

int main(){
//KAMUS
    int i = 1, N, sum;

//ALGORITMA
    sum=0;
    cout << "Input jumlah bilangan deret : ";
    cin >> N;

    for(int i = 1; i<=N; i++){
            if (i % 2 == 1){
                cout << i << " ";
                cout << endl;
                sum+=i;
            } else{
            }
    }

    cout << "hasil dari penjumlahan deret adalah = " << sum <<endl;

return 0;
}
