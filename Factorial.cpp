#include <iostream>
using namespace std;

int main()
{
    // THe factorial of a number
    // 6! = 1*2*3*4*5*6 = 720

    int number, factorial = 1;
    cout << "Number: ";
    cin >> number;

    // for (int i = 1; i <= number; i++)
    // {
    //     factorial *= i;
    // }

    //^! = 6*5*4*3*2*1 = 720
    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
    }

    cout << number << "! = " << factorial;
}