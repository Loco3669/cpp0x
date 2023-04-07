#include <iostream>

void zakres( int x, int y )
{
    //for( int i = x; i <= y; ++i )
    //     std::cout << i << ", ";
    //
    //std::cout << "koniec" << std::endl;

    while ( x <= y ){
        std::cout << x << ", ";
        x++;
    }
    std::cout << "koniec" << std::endl;
}

int main()
{
    zakres( 1, 5 );
    zakres( 8, - 1 );
    zakres( 10, 10 );
    return 0;
}