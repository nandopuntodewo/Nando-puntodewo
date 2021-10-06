#include <iostream>
using namespace std;

int main(){
    int N, count, sum;
    float rata;

    sum = 0; count = 0;     //inisialisasi
    cin >> N;               //first-element
    while (N != -999){      //kondisi-pengulangan
            count++;        //alternatif: count=count+1
            sum+=N;         //alternatif: sum=sum+N
            cin>> N;        //next-element
    } //-999
    //terminasi
    if (count >0){
            cout << "Banyak bilangan = "<< count <<endl;
            cout << "Jumlah total = "<<sum<<endl;
            rata = (float)sum/(float)count;
            cout <<"Rata-rata = "<<rata<<endl;
    } else{ //count == 0
        cout<< "Tidak ada data yang di olah"<<endl;
    }
    return 0;
}
