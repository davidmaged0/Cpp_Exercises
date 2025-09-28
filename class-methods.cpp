/*the difference between class and structure in c++*/

#include <iostream>
#include <string>
using namespace std;

/*class student  {
    public:
        int id;
        string name;
        int age;
//inside class
        void display() {
            cout << "ID: " << id << ", Name: " << name << std::endl;
        }

    };

//outside

void show(student s) {
    cout << "ID: " << s.id << ", Name: " << s.name << std::endl;
}
*/
class dog {
    public:
        string name;
        int age;

        void bark() {
            cout << name << " Woof!" << std::endl;
        }
};
int main() {
    dog germanDOG;

    germanDOG.bark();


    return 0;
}