// Including the library for input output functions
#include <iostream> 
// using the standard namespace named std for initializing our objects in its space
using namespace std;

int main()
{
    float n1, n2, product;

    //cout function is used to display results
    cout << "Enter the first number" << endl;
    //cin is used to take input from the user
    cin >> n1;
    cout << "Enter the second number" << endl;
    cin >> n2;

    product = n1 * n2;

    cout << "The product of the two numbers you entered is " << product << endl;
}