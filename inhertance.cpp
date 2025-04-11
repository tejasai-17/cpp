#include <iostream>

class shape{
    public:
    void area(){
        std::cout << "show area";
    }
};
class trinagle : public shape {
    public:
    void area(int l, int b) {
        std::cout << (l * b * 0.5) << '\n';
    }
};
class cirlcle : public shape {
    public:
    const int pi=3.14; 
    void area(int r) {
        std::cout << (pi * r * r) << '\n';
    }
};

int main(){

    trinagle trinagle;
    cirlcle cirlcle;

    trinagle.area(10,5);
    cirlcle.area(6);


    return 0;
}