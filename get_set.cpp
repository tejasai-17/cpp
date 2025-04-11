#include <iostream>

class water{
    private:
        int quantity = 100;

    public:
    int getQuantity(){
        return quantity;
    }

    void setQuantity(int quantity){
        this->quantity=quantity;
    }
};

int main(){

    water glass1;

    glass1.setQuantity(250);

    std::cout << glass1.getQuantity();
    return 0;
}