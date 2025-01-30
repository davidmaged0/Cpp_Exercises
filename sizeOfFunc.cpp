#include <iostream>
using namespace std;

int main() 
{
    float GPA = 2.34;

    // Size of float type
    cout << sizeof(float) << " bytes" << '\n'; // Output: 4 bytes

    // Size of float literal (2.34f)
    cout << sizeof(2.34f) << " bytes" << '\n'; // Output: 4 bytes

    // Size of double literal (2.34)
    cout << sizeof(2.34) << " bytes" << '\n'; // Output: 8 bytes

    // Array of characters
    char Grades[] = {'A', 'B', 'C', 'D', 'F'};

    // Size of the entire array in bytes
    cout << sizeof(Grades) << " bytes" << '\n'; // Output: 6 bytes

    // Number of elements in the array
    cout << sizeof(Grades) / sizeof(Grades[0]) << " elements" << '\n'; // Output: 6 elements
    string playes[]={ "Messi", "hazard", "Neymar", "Mbappe", "Salah" };
    cout << sizeof(playes) / sizeof(string) << " elements" << '\n'; // Output: 5 elements

    return 0;
}