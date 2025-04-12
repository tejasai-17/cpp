#include <iostream>


int main(){
    for (int i = 1; i <=10; i++)
    {
        if (i==5){
            continue;
        }
    std::cout << "i: " << i << "\n";
    }
    return 0;
}