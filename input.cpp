#include<iostream>
int main(){
    std::string name;
    std::cout << "What is our Name? : ";
    std::getline(std::cin , name); //for full name we have to put a function getline
    std::cout<<"Hello "<<name;
} 