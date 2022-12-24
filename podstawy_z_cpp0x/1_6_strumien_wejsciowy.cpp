#include <iostream>
#include <limits> //potrzebne do 2 przykładu, aby móc usówać nieograniczoną liczbę znaków ze strumienia
/*
int main(){
    float a, b, c;
    std::cin >> a;
    bool aCzyBlad = std::cin.fail();//zwraca 0 gdy nie ma błedu, a wpisana liczba rozpoczęła się od cyfry, inaczej jest 1
    std::cin.clear();               //usuwa flagi błędów w strumieniu
    std::cin.ignore( 10, '\n' );    //ignoruje tylko 10 znaków po liczbie,powyżej przenosi pozostałe znaki na kolejnego cin>>
    std::cout << std::endl;
    std::cin >> b;
    bool bCzyBlad = std::cin.fail();
    std::cin.clear();
    std::cin.ignore( 15, '\n' );    //j.w tylko 15 znaków,\n onacza, że po 15 znakach przechodzi do nowej linii kodu
    std::cout << std::endl;
    std::cin >> c;
    bool cCzyBlad = std::cin.fail();
    std::cin.clear();
    std::cin.ignore( 1000, '\n' );  //liczy ilość znaków od 1 pojawienia się znaku do momentu deklaracji ile razy i po tym przechodzi na kolejny strumień
    std::cout << std::endl;
    std::cout << "Liczba pierwsza to: " << a 
    << ". Blad? " << aCzyBlad << "." << std::endl;
    std::cout << "Liczba druga to: " << b 
    << ". Blad? " << bCzyBlad << "." << std::endl;
    std::cout << "Liczba trzecia to: " << c
    << ". Blad? " << cCzyBlad << "." << std::endl;
    return 0;
}
*/
int main(){
    float a, b, c;
    std::cin >> a;
    bool aCzyBlad = std::cin.fail();
    std::cin.clear();               
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' ); //brak limitu znaków do skasowania ze strumienia
    std::cout << std::endl;
    std::cin >> b;
    bool bCzyBlad = std::cin.fail();
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );    
    std::cout << std::endl;
    std::cin >> c;
    bool cCzyBlad = std::cin.fail();
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' ); 
    std::cout << std::endl;
    std::cout << "Liczba pierwsza to: " << a 
    << ". Blad? " << aCzyBlad << "." << std::endl;
    std::cout << "Liczba druga to: " << b 
    << ". Blad? " << bCzyBlad << "." << std::endl;
    std::cout << "Liczba trzecia to: " << c
    << ". Blad? " << cCzyBlad << "." << std::endl;
    return 0;
}