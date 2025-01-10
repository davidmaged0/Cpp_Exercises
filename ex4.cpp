#include <iostream>
using namespace std;

/*typedef int number_t;
typedef float fnumber_t;
*/
using string = std::string;
using number = int;
using fnumber = float;
int main() {
        // Your code here
    string name = "Hello";
    number x = 4;
    fnumber y = 4.54;
    cout<< name <<'\n';
    cout<< x <<'\n';
    printf("float number = %0.4f\n", y)    
    /*
    number_t number =3;
    fnumber_t number2 = 4.5;
    cout<< number <<'\n';
    cout<< number2 <<'\n';
    printf("float number is %0.3f\n", number2); */

    return 0;
}
