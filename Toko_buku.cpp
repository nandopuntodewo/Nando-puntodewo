# include <iostream>
using namespace std;

int main(){
    float price;
    float qty;
    float total_harga;
    float diskon;
    float total_pembayaran;

    cout <<" \n";
    cout <<"-------------------------------------------------------\n";
    cout <<"-------------------------------------------------------\n";
    cout <<"|            Program Total Pembayaran Buku            |\n";
    cout <<"|                   Toko Buku Wijaya                  |\n";
    cout <<"-------------------------------------------------------\n";
    cout <<"-------------------------------------------------------\n";

    cout << "Masukan harga buku : ";
    cin>> price;
    cout<< "Masukan jumlah buku : ";
    cin>> qty;

    total_harga = price * qty;

    if (qty > 100){
        cout << "Mendapat diskon 20 %.";
        diskon=total_harga*0.2;
    } else if (qty >= 20){
        cout<<"Mendapat diskon 10 %.";
        diskon=total_harga*0.1;
    } else{
        cout<<"Tidak ada diskon.";
    }
        total_pembayaran=total_harga-diskon;

    cout << " Total harga yang harus dibayar = "<< total_pembayaran << endl;
}
