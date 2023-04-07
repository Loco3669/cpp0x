#include <iostream>

int main(){

    for ( int a = 1; a <= 3; a++ ){
        for ( int b = a + 1; b <= 4; b++ ){
            for ( int c = b + 1; c <= 5; c++ ){
                
                    std::cout << a << " ";
                    std::cout << b << " ";
                    std::cout << c << " ";
                    std::cout << std::endl;
                
                
            }
        }
    }

    return 0;
}