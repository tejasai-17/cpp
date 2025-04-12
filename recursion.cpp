#include <iostream>

int factorial(int num);
int main(){
    
    int number;
    std::cout << "Enter a number which u want to fact: ";
    std::cin >> number;

    std::cout << "The fact of number " << number << " is: " << factorial(number);

    return 0;
}
int factorial(int num){

    if (num > 1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }

}