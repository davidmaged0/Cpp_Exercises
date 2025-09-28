//c++ code
#include <iostream>
#include <vector>

using name_t = std::string;
using age_t = int;

void print_info(const name_t& name, age_t age)
{
    std::cout << name << " is " << age << " years old." << '\n';
}   

int main()
{
    name_t name = "David";
    age_t age = 25;

    print_info(name, age);

    //std::cout << name << " is " << age << " years old." << '\n';



    return 0;
}