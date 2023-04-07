/*#include <iostream>

int main()                      //WYKONANIE KODU Z OPERACJA POMINIECIA KODU W PETLI CONTINUE
{
    for( int x = 0; x < 8; x++ )
    {
        std::cout << "x = " << x << std::endl;
        if( x == 2 || x == 3 || x == 5 )
        {
            std::cout << "Teraz 'x' wynosi " << x;
            std::cout << " - wywoluje continue!" << std::endl;
            continue;
        }
        std::cout << "KONIEC kroku x = " << x << std::endl;
    }
    return 0;
}*/

#include <iostream>

int main()                      //WYKONANIE TEGO SAMEGO KODU BEZ OPERACJI CONTINUE
{
    for( int x = 0; x < 8; x++ )
    {
        std::cout << "x = " << x << std::endl;
        if( x == 2 || x == 3 || x == 5 )
        {
            std::cout << "Teraz 'x' wynosi " << x;
            std::cout << " - wywoluje continue!" << std::endl;
            
        }
        else
        std::cout << "KONIEC kroku x = " << x << std::endl;
    }
    return 0;
}