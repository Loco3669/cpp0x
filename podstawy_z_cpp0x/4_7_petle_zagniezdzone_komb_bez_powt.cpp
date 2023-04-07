#include <iostream>

int main(){

    for ( int a = 1; a <= 3; a++ ){
        for ( int b = a + 1; b <= 4; b++ ){
            for ( int c = b + 1; c <= 5; c++ ){
                for ( int d = c + 1; d <= 5; d++ ){
                    std::cout << a << " ";
                    std::cout << b << " ";
                    std::cout << c << " ";
                    std::cout << d << " ";
                    std::cout << std::endl;
                
                }
            }
        }
    }

    return 0;
}