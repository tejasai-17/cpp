#include <iostream>

int main(){

    std::string name[]= { "tejasai","arun","shantha","srinivas" };
    for(std::string n : name){
        std::cout << n << '\n';
    }
    return 0;
}