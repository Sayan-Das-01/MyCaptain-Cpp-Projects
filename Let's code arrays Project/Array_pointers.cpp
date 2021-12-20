#include <iostream>
using namespace std;

int main()
{
    //declaring array which can hold upto 5 integers
    int arr[5];
    cout << "Enter the elements:" << "\n";

    //defining the array one abject at a time using for loop sequence control
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "You Entered: ";

    //printing the array using the same sequence from line 11
    for (int i = 0; i < 5; i++)
    {
        //our desired result
        cout << "\t" << arr[i]; 
        // cout<< arr[i] << "\t" ; // Undesired result
    }
    
    return 0;
}