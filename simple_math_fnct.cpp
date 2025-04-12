#include <iostream>
#include <cmath>
//we use include cmath for using math function

// int main(){

//     using namespace std;

//     double x = 3.88;
//     double y = 5;
//     double a,b,c,d,e;

//     a = max(x,y);
//     //max is used to get maximum number
//     cout << "max: " << a << "\n";
//     b = min(x,y);
//     //min is used to get minimum number
//     cout << "min: " << b << "\n";
//     c = pow(3,4);
//     //pow is used to get power of a number
//     cout << "power: " << c << "\n";
//     d = sqrt(16);
//     //squt is used to get square root of a number
//     cout << "square root: " << d << "\n";
//     e = ceil(x);
//     /*ceil is used to get round figure of a like if 
//     we have 3.88 it will print 4 number*/
//     cout << "ceil: " << e << "\n";

//     return 0;
// }

/* If you want to check more math function visit this website:
https://www.cplusplus.com/reference/cmath/ */

int main(){
    using namespace std;

    double a;
    double b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    double c = sqrt(pow(a,2)+pow(b,2));
    cout << "Side C: " << c;

    return 0;
}