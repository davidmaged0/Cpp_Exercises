//hypotenues calculation in c++
#include <iostream>
#include <cmath>

using namespace std;    

int main ()
{
    double a = 3.0;
    double b = 4.120;
    double c;

    a = pow(a ,2);
    b = pow(b ,2);
    c = (int)sqrt(a + b);//type conversion from double to int

    cout << "The hypotenues is " << c << '\n';
    

}
