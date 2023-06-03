#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("clear");
    cout << "Guest: ";
    cin >> guestUserNum;

    hostUserNum == guestUserNum ? cout << "Correct!" : cout << "Failed!"; // ternary operator

    // if (hostUserNum == guestUserNum)
    //     cout << "Correct!";
    // else
    //     cout << "Failed!";
}