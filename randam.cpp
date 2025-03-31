#include <iostream>

int main(){
    srand (time(NULL));

    int num = (rand() % 5) +1;

    std::cout << "The number gussed my the ystem is: " << num << "\n";

    return 0;
}