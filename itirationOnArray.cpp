/*c++ */
#include <iostream>
using namespace std;

int main() 
{
    string players[] = {"Messi", "Hazard", "Neymar", "Mbappe", "Salah"};

    for (string palyer : players)
    {
        cout << palyer << '\n';
    }
    return 0;
}

