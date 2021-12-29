#include <iostream>
using namespace std;

// class with properties of time
class time
{
public:
    int hour;
    int minute;
    int second;
};

// prototype of funtion to calculate total time in seconds
int total_seconds(int, int, int);

int main()
{
    time t;

//compiler will return to this statement if user entered invalid time
repeat:

    cout << "\n\nEnter time:" << "\n\n";

    cout << "Hours: ";
    cin >> t.hour;

    cout << "Minutes: ";
    cin >> t.minute;

    cout << "Seconds: ";
    cin >> t.second;

    //checking validity of time
    if (t.hour > 24 || t.minute > 60 || t.second > 60)
    {
        cout << "\nYou entered invalid time, try again";
        goto repeat;
    }

    cout << "\n\nThe time you entered is: ";

    // if user entered any one or more opf hours, minutes or seconds less than 9

    // if user entered hours less than 10
    if (t.hour < 10)
    {
        cout << "0" << t.hour << ":";
    }
    else
    {
        cout << t.hour << ":";
    }

    // if user entered minutes less than 10
    if (t.minute < 10)
    {
        cout << "0" << t.minute << ":";
    }
    else
    {
        cout << t.minute << ":";
    }

    // if user entered seconds less than 10
    if (t.second < 10)
    {
        cout << "0" << t.second;
    }
    else
    {
        cout << t.second;
    }

    int total = total_seconds(t.hour, t.minute, t.second);
    cout << "\n\nThe time is = " << total;

    return 0;
}

int total_seconds(int h, int m, int s)
{
    int total = (h * 60 * 60) + (m * 60) + s;

    return total;
}
