#include <iostream>

using namespace std;
int B = 32;
float FtoC(float F)
{
    return (F-B)*5/9;
}

float FtoR(float F)
{
    return (F-B)*4/9;
}


int main()
{
    float Fahrenhait;
    cout<<"Masukan Suhu Fahrenhait : ";
    cin>>Fahrenhait;
    cout<<"Suhu dalam Celcius = "<<FtoC(Fahrenhait)<<endl;
    cout<<"Suhu dalam Reamur = "<<FtoR(Fahrenhait)<<endl;

}
