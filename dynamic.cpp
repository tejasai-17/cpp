#include <iostream>

int main(){

    char *pGrade = NULL;
    int size;
    std::cout << "Enter the size: " ;
    std:: cin >> size;

    pGrade = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the grades " << i+1 << ":";
        std::cin >> pGrade[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrade[i] << '\n';
    }
    
    delete pGrade;
    return 0;
}