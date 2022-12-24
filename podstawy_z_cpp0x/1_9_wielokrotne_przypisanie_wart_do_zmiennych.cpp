//WIELOKROTNE PRZYPISANIE

#include <iostream>
//SPOSÓB NR 1
int main(){
    int a = 0, b = 0, c = 0;
    std::cout << a << b << c << std::endl;
}
/*
//SPOSÓB NR 2
int main(){
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    std::cout << a << b << c << std::endl;
}

//SPOSÓB NR 3
int main(){
    int a, b, c;
    a = b = c = 0; //napierw jest c=0,potem b=c i ostatnie a=b
    std::cout << a << b << c << std::endl;
}
*/