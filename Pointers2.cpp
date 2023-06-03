#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}
void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i': // handle int pointer
        cout << *((int *)ptr) << endl;
        break;
    case 'c': // handle char pointer
        cout << *((char *)ptr) << endl;
        break;
        // case 'f': // handle float pointer
        //     cout << *((float *)ptr) << endl;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}