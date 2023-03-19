#include <iostream>
#include <limits>

bool wczytaj_liczbe( int & liczba ) //Referencja w tym miejscu powoduje dzialanie na zmiennej "x" z f.main (jej zmiane)
{                                   //bez niej wartosc zmiennej "x" pozostaje niezadeklarowana i przyjmuje losowa wartosc
    std::cin >> liczba;
   
    if( std::cin.fail() )
    {
        std::cin.clear();
        std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
        return false;
    }
   
    return true;
}

int main()
{
    int x;
    do
    {
        std::cout << "Podaj liczbe: ";
    } while( wczytaj_liczbe( x ) == false );
   
    std::cout << "Liczba podana to: " << x << std::endl;
    return 0;
}