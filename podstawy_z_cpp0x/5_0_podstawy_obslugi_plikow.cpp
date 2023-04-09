#include <iostream>
#include <fstream>
#include <string>

bool wyswietlZawartoscPliku( std::string sNazwaPliku, std::string SzukanaFraza )
{
    std::ifstream plik;
    plik.open( sNazwaPliku.c_str() );
    if( !plik.good() )
         return false;
   
    std::string wiersz;
    int i = 1;
   
    while( std::getline( plik, wiersz ) )
    {
        size_t znalezionaPozycja = wiersz.find( SzukanaFraza );
        if( znalezionaPozycja == std::string::npos )
             std::cout << i << ". Brak" << std::endl;
        else
             std::cout << i << ". " << wiersz << std::endl;
       
        i++;
       
    }
   
    plik.close();
    return true;
}


int main()
{
    std::string SzukanaFraza;
    std::cout << "Wprowadz fraze do wyszukania w pliku: ";
    std::cin >> SzukanaFraza;
    if( !wyswietlZawartoscPliku( "5_0_cpp0x.txt", SzukanaFraza ) )
         std::cout << "Nie udalo sie otworzyc pliku o podanej nazwie." << std::endl;
   
    return 0;
}