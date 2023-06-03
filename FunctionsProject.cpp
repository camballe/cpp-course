#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age)
{
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    cout << "I am " << age << " years old" << endl;
}

int main()
{
    string myName, myCity;
    int myAge;
    cout << "Name: ";
    cin >> myName;
    cout << "City: ";
    cin >> myCity;
    cout << "Age: ";
    cin >> myAge;

    introduceMe(myName, myCity, myAge);

    return 0;
}