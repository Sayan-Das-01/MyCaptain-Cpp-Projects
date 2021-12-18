#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You are not eligible to vote" << "\n";
        cout << "Please come after " << (18 - age) << " years" << "\n";
    }
    else
    {
        if (age == 50)
        {
            cout << "Congrats for the Half Century" << "\n";
            cout << "You are eligible to vote" << "\n";
        }
        else if (age == 100)
        {
            cout << "Congrats for the Century" << "\n";
            cout << "You are eligible to vote" << "\n";
        }
        else
        {
            cout << "You are eligible to vote";
        }
    }
    
    return 0;
}