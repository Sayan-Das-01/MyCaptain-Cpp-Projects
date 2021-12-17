// Including the library for input output functions
#include <iostream> 
// using the standard namespace named std for initializing our objects in its space
using namespace std;

int main()
{
    // sizeof() operator is used to get the space allocated for a specific data type in the stack
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " byte  s" << endl;

    return 0;
}