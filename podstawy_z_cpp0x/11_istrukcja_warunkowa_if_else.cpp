//INSTRIKCJA WARUNKOWA IF
#include <iostream>

/*int main()
{
    int wiek;
    std::cin >> wiek;
    if( wiek >= 18 && wiek <= 100 )
    {
        std::cout << "Twierdzisz, ze jestes pelnoletni..." << std::endl;
        std::cout << "ale czy to kogos interesuje? :)" << std::endl;
    }
    std::cout << "Koniec" << std::endl;
    return 0;
}*/


//USUNĄĆ BŁĄD PROGRAMU

//#include <iostream>
int main()
{
    int wiek;
    std::cin >> wiek;
    if( wiek < 18 ) //zbędny; który spowodował przeczytanie funkcji jako pustej

    std::cout << "Nie jestes pelnoletni" << std::endl; //brak;
    else //zbędny;

    std::cout << "Jestes pelnoletni" << std::endl; //brak;
    std::cout << "Koniec" << std::endl;
    return 0;
}
