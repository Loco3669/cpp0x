/*#include <iostream>

int main()              //WYKONANIE KODU Z OPERACJA PRZERWANIA PETLI BREAK
{
    for( int x = 0; x < 10; x++ )
    {
        if( x == 7 )
        {
            std::cout << "Teraz 'x' wynosi " << x << "." << std::endl;
            std::cout << "Przerywam petle!" << std::endl;
            break;
        }
        std::cout << "x = " << x << std::endl;
    }
    std::cout << "Teraz jestem tu :)" << std::endl;
    return 0;
}*/

#include <iostream>

int main()              //WYKONANIE TEGO SAMEGO KODU BEZ OPERACJI BREAK
{
    for( int x = 0; x < 10; x++ )
    {
        if ( x <= 6 )
            std::cout << "x = " << x << std::endl;
        if( x == 7 )
        {
            std::cout << "Teraz 'x' wynosi " << x << "." << std::endl;
            std::cout << "Przerywam petle!" << std::endl;
            
        }
        
    }
    std::cout << "Teraz jestem tu :)" << std::endl;
    return 0;
}