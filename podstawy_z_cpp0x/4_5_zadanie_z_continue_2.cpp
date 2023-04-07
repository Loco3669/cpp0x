/*#include <iostream>
#include <cstdlib>
#include <ctime>

void wypisz( int tablica[], int rozmiar )
{
    std::cout << "Liczby w tablicy: " << std::endl;
    for( int i = 0; i < rozmiar; ++i )
         std::cout << tablica[ i ] << ", ";
   
    std::cout << std::endl;
}

void wykonajZadanie( int tablica[], int rozmiar )
{
    std::cout << "Wykonaj zadanie: " << std::endl;
    int iSumaWszystkich = 0;
    int iSumaWypisanych = 0;
    for( int i = 0; i < rozmiar; ++i )
    {
        iSumaWszystkich += tablica[ i ];
        if( tablica[ i ] % 2 != 0 )
             continue;                      //POZBYWAMY SIE CONIUNUE
       
        std::cout << tablica[ i ] << ", ";
        iSumaWypisanych += tablica[ i ];
    }
    std::cout << std::endl;
    std::cout << "Suma wszystkich: " << iSumaWszystkich << std::endl;
    std::cout << "Suma wypisanych: " << iSumaWypisanych << std::endl;
}

int main()
{
    srand( time( 0 ) );
    int tab[ 10 ];
    for( int i = 0; i < 10; ++i )
         tab[ i ] = rand() % 100;
   
    wypisz( tab, 10 );
    wykonajZadanie( tab, 10 );
    return 0;
}*/

#include <iostream>
#include <cstdlib>
#include <ctime>

void wypisz( int tablica[], int rozmiar )
{
    std::cout << "Liczby w tablicy: " << std::endl;
    for( int i = 0; i < rozmiar; ++i )
         std::cout << tablica[ i ] << ", ";
   
    std::cout << std::endl;
}

void wykonajZadanie( int tablica[], int rozmiar )
{
    std::cout << "Wykonaj zadanie: " << std::endl;
    int iSumaWszystkich = 0;
    int iSumaWypisanych = 0;
    for( int i = 0; i < rozmiar; ++i )
    {
        iSumaWszystkich += tablica[ i ];
        if( tablica[ i ] % 2 == 0 ){                    //ZMIENIAMY LOGIKE NA GDY PODZIELNE PRZEZ 2 BEZ RESZTY
            std::cout << tablica[ i ] << ", ";          //TO WYPISZ TA LICZBE 
            iSumaWypisanych += tablica[ i ];            //I DODAJ DO SUMY WYPISANYCH
        }
        
    }
    std::cout << std::endl;
    std::cout << "Suma wszystkich: " << iSumaWszystkich << std::endl;
    std::cout << "Suma wypisanych: " << iSumaWypisanych << std::endl;
}

int main()
{
    srand( time( 0 ) );
    int tab[ 10 ];
    for( int i = 0; i < 10; ++i )
         tab[ i ] = rand() % 100;
   
    wypisz( tab, 10 );
    wykonajZadanie( tab, 10 );
    return 0;
}