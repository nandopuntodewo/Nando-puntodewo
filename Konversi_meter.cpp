#include <iostream>
using namespace std;

float MtoKM(float M)
{
    return (M/1000);
}

float MtoHM(float M)
{
    return (M/100);
}


float MtoDAM(float M)
{
    return (M/10);
}

float MtoDM(float M)
{
    return (M*10);
}

float MtoCM(float M)
{
    return (M*100);
}

float MtoMM(float M)
{
    return (M*1000);
}
int main()
{

cout <<" \n";
cout <<"-------------------------------------------------\n";
cout <<"-------------------------------------------------\n";
cout <<"|            Program Konversi Meter             |\n";
cout <<"|             Created by Deanandro              |\n";
cout <<"-------------------------------------------------\n";
cout <<"-------------------------------------------------\n";

float Meter;
cout<<"Masukan Panjang Dalam Meter : ";
cin>>Meter;
cout<<"KiloMeter = "<<MtoKM(Meter)<<endl;
cout<<"HektoMeter = "<<MtoHM(Meter)<<endl;
cout<<"DekaMeter = "<<MtoDAM(Meter)<<endl;
cout<<"DesiMeter = "<<MtoDM(Meter)<<endl;
cout<<"CentiMeter = "<<MtoCM(Meter)<<endl;
cout<<"MiliMeter = "<<MtoMM(Meter)<<endl;

}
