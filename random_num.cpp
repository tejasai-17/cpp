#include <iostream>

int main(){

    srand(time(NULL));

    int num = (rand() % 6) +1;

    std::cout << num << "\n";
    return 0;
}