#include <iostream>

using namespace std;
int B = 32;
float CtoF(float C)
{
    return (C*1.8+B);
}

float CtoR(float C)
{
    return (C+B);
}

float CtoK (float C)
{
    return (C*0.8);
}

int main()
{
    float Celcius;
    cout<<"Masukan Suhu Celcius : ";
    cin>>Celcius;
    cout<<"Fahrenhait = "<<CtoF(Celcius)<<endl;
    cout<<"Reamur = "<<CtoR(Celcius)<<endl;
    cout<<"Kelvin = "<<CtoK(Celcius)<<endl;
}
