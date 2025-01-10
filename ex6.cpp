//type conversion in C++
//implicit conversion
//explicit conversion
#include <iostream> 

int main()
{
    /*double x =/*(int)3.14159;
    std::cout << (int)x << '\n';*/


    //printf("x = %0.3f\n", x);
    int correct =7;
    int total = 10;
    double percent = correct/total;
    double percent2 = (double)correct/total;
    std::cout << "no conversion = "<<percent << '\n';
    std::cout <<"with conversion = "<< percent2 << '\n';

}