/*const keyword is basicaly used for make sure the value which we 
have inputed can not be modified*/

//now we are creating a program to caluclate circumference of circle

#include <iostream>
int main(){
    const double PI = 3.14;
    double radious = 15;
    double circumference = 2*PI*radious;
    std::cout << circumference << "cm";
    return 0;
}

/*In this program we have used const in PI because we dont 
want anyone to change the value of PI*/