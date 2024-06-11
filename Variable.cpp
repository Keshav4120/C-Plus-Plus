#include <iostream>

int main(){

    int x; //declaring a variable
    x = 5; //assignment
    int y = 10;
    int sum = x+y;
    // in c++ if we have to store decimal number we have to put double 
    double price = 10.45;
    // single character 
    char grade = 'A';// only store a single character 

    // boolean (only True or False)
    bool student = false;
    bool power = true;
    //String (we can include number in string we they are treated differently)
    std::string name = "Keshav Jindal";

    // if we have to some value constant we have to put const in the stating of the declaration of varianble
    const double z = 100;

    
    std::cout << x << '\n' ;
    std::cout << y << '\n' ;
    std::cout << sum << '\n' ;
    std::cout << price << '\n' ;
    std::cout << grade << '\n' ;
    std::cout << student << '\n' ;
    std::cout << name << '\n' ;
    std::cout << "Hello " << name ;
     std::cout << z << '\n' ;


    return 0;
}
