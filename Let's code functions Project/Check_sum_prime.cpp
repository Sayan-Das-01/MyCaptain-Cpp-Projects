// program to check a number can be expressed as sum of two prime numers
#include <iostream>
using namespace std;

// function to check the possible additions
void prime_sum(int);
// function to check the number is prime or not
bool prime_check(int);

int main()
{
    int num;
    cout << "\nEnter a positive interger: ";
    cin >> num;
    // cout << "\nYou Entered " << num;

    // giving the number given by user to the function prime_sum as argumrnts
    prime_sum(num);

    return 0;
}

void prime_sum(int n)
{
    // cout << "\nI am in function prime_sum";
    int temp;
    bool ch1, ch2;

    for (int i = 0; i < ((n/2)+1); i++)
    {
        temp = n - i;
        ch1 = prime_check(temp);
        ch2 = prime_check(i);

        if (ch1 == true && ch2 == true)
        {
            cout << "\n"
                 << n << " = " << temp << " + " << i;
        }
    }

    return;
}

bool prime_check(int number)
{
    // cout << "\nI am in function prime_check";
    if (number <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < number; i++)
    {
        // cout << "\nchecking...";
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}