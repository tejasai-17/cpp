#include <iostream>

template <typename I,typename X>

auto min(I x,X y){
    return (x<y)? x : y;
}

int main(){

    std::cout << min(0,1.5) << "\n";

    return 0;
}

/*template is used to assign a datatype to a variable for example i have 
used I and X where I acts integer datatype because as u cen see in the 
program i havegiven a integer value to the I and X acts as a double 
datatype because as u cen see in the program i have given a double 
value to the X. so that's is*/