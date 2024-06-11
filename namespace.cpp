#include<iostream>
  
    namespace first{
        int x = 100;
        int y = 200;
    }
    namespace second{
        int x = 200;
        int y = 300;
    }
    int main(){
        using namespace first;

        std::cout << x << '\n';
        std::cout << second::y << '\n';//we have to prefix the second name space
    }