#include <iostream>

int main(){

    std::string bike[][3]={{"Kawasaki = ","ZX10R,","Z-900"},
                           {"BMW = ","S1000RR,","M1000RR"}};

    int row = sizeof(bike)/sizeof(bike[0]);
    int column = sizeof(bike[0])/sizeof(bike[0][0]);

    for(int i=0; i < row; i++){
        for(int j=0; j < column; j++){
            std::cout << bike[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}