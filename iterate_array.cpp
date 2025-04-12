#include <iostream>

int main(){

    std::string name[]= { "tejasai","arun","shantha","srinivas" };
    for(int i=0; i < sizeof(name)/sizeof(std::string); i++){
        std::cout << name[i] << '\n';
    }
    return 0;
}