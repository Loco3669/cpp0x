//ZABAWA Z OPERATORAMI LOGICZNYMI

#include <iostream>

int main(){
    bool wynik;
    
    wynik = true && false || !true && false || !( !true && false ); //0 lub 0 lub 1
    std::cout << "wynik = " << wynik << std::endl; //1

    wynik = true && !false || !true && false || ( true && false ); //1 lub 0 lub 0
    std::cout << "wynik = " << wynik << std::endl; //1

    wynik = true && false || !true && false || ( !true && false ); //0 lub 0 lub 0
    std::cout << "wynik = " << wynik << std::endl; //0

    wynik = true && false || !true && !false || !( true && false );//0 lub 0 lub 1
    std::cout << "wynik = " << wynik << std::endl; //1

    return 0;
}

