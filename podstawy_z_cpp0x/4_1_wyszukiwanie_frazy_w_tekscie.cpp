#include <iostream>
#include <string>

bool szukaj( std::string & tekst, std::string wyraz1, std::string wyraz2 )
{
    //TODO: implementację tej funkcji należy napisać
    size_t SearchedPhrase1 = tekst.find (wyraz1);
    size_t SearchedPhrase2 = tekst.find (wyraz2);
    if ((SearchedPhrase1 && SearchedPhrase2) == std::string::npos){
        return false;
    }
    if (SearchedPhrase1 != std::string::npos){
        if (SearchedPhrase2 != std::string::npos){
            return true;
        }       
    }
    return false;
}

void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         std::cout << "Znaleziono" << std::endl;
    else
         std::cout << "Nie znaleziono" << std::endl;
   
}

int main()
{
    std::string napis = "Zadanie domowe z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik( szukaj( napis, "ada", "kurs" ) );
    wypiszWynik( szukaj( napis, "ada", "taki" ) );
    wypiszWynik( szukaj( napis, "C++", "cpp0x" ) );
    wypiszWynik( szukaj( napis, "C#", "cpp0x" ) );
    return 0;
}