#include <iostream>

void swap(int &x,int &y);

int main(){

    int x = 5;
    int y = 10;

    swap(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(int &x,int &y){
    
    int temp;

    temp = x;
    x = y;
    y = temp;

}