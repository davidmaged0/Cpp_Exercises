//c++ structure

#include <iostream>
#include <cctype>


using namespace std;

typedef char grade_t;

int main()
{
    grade_t grade ;
    cout << "enter your grade : ";
    cin>> grade;
    
    grade = toupper(grade);//converts the grade to uppercase

    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':   
        cout << "Average" << endl;
        break;
    case 'D':   
        cout << "Poor" << endl;
        break;  
    case 'F':       
        cout << "Fail" << endl;
        break;

    default:
        cout << "Invalid grade" << endl;
        break;
    } 

    return 0;
}
