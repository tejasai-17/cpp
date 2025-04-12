#include <iostream>


int main(){
    int i = 1;
    int sum = 0;

    while (i<=10){
        sum=sum+i;
        i++;
    }
    std::cout << "sum: " << sum << "\n";
    return 0;
}