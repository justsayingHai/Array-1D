#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int steps[size];
    int total_steps = 0;

    cout << "Enter the step counts: " << endl;

    for (int index = 0; index < size; index++)
    {
        cin >> steps[index];
        total_steps += steps[index];
    }

    cout << "Steps: ";

    for (int index = 0; index < size; index++)
    {
        cout << steps[index] << " ";
    }

    cout << endl;

    cout << "Total: " << total_steps;

    return 0;
}

