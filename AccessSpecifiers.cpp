/*In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, 
however, they can be accessed in inherited classes.     */
#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{
    //by default, all members of a class are private if no access specifier is defined.
    //attributes
    //private:
    string name ;
    float balance ;

    //methods 
    public:
    void getAccountDetails(string accountName, float initialBalance) {
        name = accountName;
        balance = initialBalance;
    }
    void Withdraw(float amount) {
        balance -= amount;
    }
    void Deposit(float amount) {
        balance += amount;
    }
    void DisplayBalance() {
        cout << "Your balance is: " << balance << endl;
    }
};



int main()
{
    BankAccount account1;
    account1.getAccountDetails("John Doe", 500);
    account1.Deposit(1000);
    account1.DisplayBalance();

    return 0;
}