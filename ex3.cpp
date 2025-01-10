#include <iostream>

namespace firstValue{
    int x =4;
}
namespace secondValue
{
    int x = 5;
}
#include <iostream>

int main() {
    // Your code here
    int x = 2;
    std::cout << x << '\n';
    std::cout << firstValue::x << '\n'; 
    std::cout << secondValue::x << '\n';

    return 0;
}
