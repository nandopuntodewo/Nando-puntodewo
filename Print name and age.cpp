# include <iostream>
using namespace std;

int main(){
    int birth;
    string name;

    cout<< "Input your name : ";
    cin>> name;
    cout<< "Year of birth : ";
    cin>> birth;

    cout<< "your name is = " << name << endl;
    cout<< "and your age is : " << 2021 - birth << endl;

    return 0;
}
