//c++ user input output
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age ;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your name: ";

    //cin >> name;    

    //cout << "Hello " << name << '\n';
    getline(cin>>ws, name);//ws is used to ignore white spaces
    //printf("Hello %s\n", name);
    cout << "Hello " << name << " ,you are "<<age <<'\n';
    return 0;
}
    