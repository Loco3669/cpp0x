#include <iostream>

int main(){

    for ( int a = 1; a <= 3; a++ ){
        
        for ( int b = 1; b <= 3; b++ ){
            
            for ( int c = 1; c <= 3; c++ ){
                
                for ( int d = 1; d <= 3; d++ ){
                    
                    for ( int e = 1; e <= 3; e++ ){
                        std::cout << a << " ";
                        std::cout << b << " ";
                        std::cout << c << " ";
                        std::cout << d << " ";
                        std::cout << e << " ";
                        std::cout << std::endl;
                    }
                }
            }
        }
            
    }
    return 0;
}