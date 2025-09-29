#include <iostream>
#include <string>

using namespace std;    

class student  {
    public:
        // attributes
        int id;
        string name;
        int age;
        //  method
        void display() {
            cout << "ID: " << id << ", Name: " << name << std::endl;
        }

    };

int main() {
    //object created s1 &s2 of class student
    student s1;
    s1.id = 101;
    s1.name = "Alice";
    s1.age = 20;

    student s2;
    s2.id = 102;
    s2.name = "Bob";
    s2.age = 22;

    s1.display();
    s2.display();

    return 0;
}