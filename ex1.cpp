#include <iostream>
#include <string>

using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout <<"size of the entire array: "<< sizeof(myNumbers)<<"\n"; // Outputs 20 = 4 byte(int) * 5 elements
    cout << "size of an element in myNumbers Array: "<<sizeof(myNumbers[0])<<"\n";  
    string cars[] ={"Volvo", "BMW", "Ford"};
    /*for (int i = 0; sizeof(cars)/sizeof(cars[0]); i++)
    {
        cout << cars[i] << "\n";
    }*/
    cout << "size of an element in cars Array: "<<sizeof(cars[0]) << "\n";
    cout << "number of elements in cars Array: "<< sizeof(cars)/sizeof(cars[0]) << "\n";


    int length_myNumbersArray = sizeof(myNumbers)/ sizeof(myNumbers[0]);
    cout << "number of elements in myNumbers Array: "<<length_myNumbersArray << "\n";
    return 0;


}
