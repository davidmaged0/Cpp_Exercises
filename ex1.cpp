#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nums[5]={2 , 4 , 6 , 8 , 10};
    for (int i=4; i>=0; i--)
    {
        cout << nums[i] << " ";
    }

    cout << "\n";
    for (int i : nums)
    {
        cout << i << "\n";

    }


    return 0;
}
