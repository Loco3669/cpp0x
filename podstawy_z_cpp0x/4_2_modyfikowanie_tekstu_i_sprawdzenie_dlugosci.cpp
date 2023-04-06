#include <iostream>
#include <string>

std::string konwertuj( std::string sTekst )
{
    std::string sWynik;
    //TODO: tu należy napisać kod realizujący zadanie
    std::string a = "<b>";
    std::string b = "</b>";
    for ( unsigned int i = 0; i <= sTekst.size(); i++ ){
        size_t SearchedFragment2 = sTekst.find( a );
        if (SearchedFragment2 != std::string::npos){
            
            sTekst.erase(SearchedFragment2, 3);         //metoda kosowania, 1 parametr (od którego miejsca w sTekst, 2 par. ile kasujemy od tego miejsca)
            sTekst.insert(SearchedFragment2, "[b]");    //metoda wstawiania,1 par. to co wyż., 2 par. co wstawiamy
        }
        size_t SearchedFragment3 = sTekst.find( b );    
        if (SearchedFragment3 != std::string::npos){
        
            sTekst.erase(SearchedFragment3, b.size());  //2 par. bierzemy rozmiar string b czyli 3
            sTekst.insert(SearchedFragment3, "[/b]");   
        }
        if ( !(sTekst [ i ] == ' ' && sTekst [ i + 1 ] == ' ' ) ){  //jezeli dany wyraz [ i ] oraz kolejny [ i+1 ]ze stringu sTekst jest rowniez
                                                                    //pusty to zanegowanie tego powoduje, ze gdy ta sekwencja wystapi w kolejnym
                                                                    //miejscu tej tablicy string [ i ] nie zostanie nic wpisane, az gdy nie
                                                                    //nie pojawia sie 2 spacje obok siebie, wtedy do sWynik wpisze sie znak z sTekst
            sWynik += sTekst[ i ];
        }

    }
     
    return sWynik;
}
int main()
{
    std::cout << konwertuj( "<b>to jest </b> testowy       napis     <b>:)" ) << std::endl;
    std::cout << konwertuj( "  s       a         m      e         sp    a   c j    e" ) << std::endl;
    std::cout << konwertuj( "<<B><//b><i></i>" ) << std::endl;
    return 0;
}