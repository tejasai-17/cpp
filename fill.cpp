// fill(start,end,value)

#include <iostream>

int main(){
    int size;
    std::cout << "Enter the number of times u want to repete the value: ";
    std::cin >> size;

    std::string grade [size];
    
    fill(grade, grade+size, "A");

    for (std::string G : grade){
        std::cout << G << '\n';
    }
    return 0;
}