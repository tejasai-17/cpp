/*We can use namespace keyword to specify 
another value for same variable*/

namespace f{
    int x=1;
}

namespace s{
    int x=2;
}

//program 1:
// #include <iostream>
// int main(){
//     int x=0;
//     std::cout << x;
//     return 0;
// }

//program 2:
// #include <iostream>
// int main(){
//     int x=0;
//     std::cout << f::x;
//     return 0;
// }

//program 3:
// #include <iostream>
// int main(){
//     int x=0;
//     std::cout << s::x;
//     return 0;
// }


//problem 4:
#include <iostream>
int main(){
    using namespace std;
    int x=0;
    cout << f::x << "\n";
    cout << s::x;
    return 0;
}

/*As u can see in program 4,I have used (using) keyword, it makes 
program simple and shorter, as i have didnt mention std::cout even
though i got output by only mentioning cout because i have already 
mentioned it by using (using) keyword for std*/
