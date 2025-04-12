#include <iostream>


int main(){
    int i = 1;
    int sum = 0;

    do{
        sum=sum+i;
        i++;
    }while (i<=10);
    std::cout << "sum: " << sum << "\n";
    return 0;
}