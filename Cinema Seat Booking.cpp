#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int seats[size];

    cout << "Enter the seats: " << endl;
    for (int index = 0; index < size; index++)
    {
        cin >> seats[index];
    }

    int new_second_seat;
    cout << "Enter the new second seat value to be updated: ";
    cin >> new_second_seat;

    seats[1] = new_second_seat;
    for (int index = 0; index < size; index++)
    {
        cout << seats[index] << " ";
    }

    return 0;
}

