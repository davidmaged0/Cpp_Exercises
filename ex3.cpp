#include <iostream>

namespace firstValue {
    int x = 4;
}

namespace secondValue {
    int x = 5;
}

int main() {
    //int x = 2;
    // using namespace secondValue;
    // using namespace firstValue;
    std::cout << firstValue::x << '\n';
    std::cout << firstValue::x << '\n'; 
    std::cout << secondValue::x << '\n';

    return 0;
}