#include <iostream>
using namespace std;

//numeric panjang, lebar, luas
double panjang;
double lebar;
double luas;

void Inputdata(){
    cout << "Masukan panjangnya = ";
    //accpet panjang
    cin >> panjang;
    cout << "Masukan lebar = ";
    //accpet panjang
    cin >> lebar;
}
double hitungluas(){
    return panjang * lebar;
}

void tampilluas(){
    cout << "Luasnya = " << hitungluas();
}

int main()
{//begin
    Inputdata();
    tampilluas();    
}//end
