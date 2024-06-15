#include<iostream>
int main(){
    double a;
    double b;
    double z;
    double y;
    std::cout <<"Please Enter 1st Number : "<<'\n';
    std::cin >> a;
    std::cout <<"Please Enter 2st Number : "<<'\n';
    std::cin >> b;
    z = std::max(a, b);     
    y = std::min(a, b);     
    std::cout << "Max Number is : " << z << '\n';
    std::cout << "Min Number is : " << y << '\n';
    return 0;

}