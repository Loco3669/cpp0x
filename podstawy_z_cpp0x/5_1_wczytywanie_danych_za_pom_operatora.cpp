#include <fstream>
#include <iostream>
#include <string>


bool wczytajPlik( std::string nazwaPliku )
{
    std::ifstream plik;
    plik.open( nazwaPliku.c_str() );
    if( !plik.good() )
         return false;
   
   int a;
   int wynik = 0;
    while( true ) //pętla nieskończona
    {
        a = 0;
        plik >> a ;
        wynik += a;
        if( plik.fail() ){
            std::cout << "Suma liczb w pliku wynosi: " << wynik << std::endl;
             break; //zakończ wczytywanie danych - wystąpił jakiś błąd (np. nie ma więcej danych w pliku)
        }
             
    } //while
    return true;
}

int main()
{
    if( !wczytajPlik( "5_1_dane.txt" ) )
         std::cout << "Nie udalo sie otworzyc pliku!" << std::endl;
   
    return 0;
}