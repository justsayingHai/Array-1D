#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int battery_vals[size];
    int low_readings = 0;

    cout << "Battery inputs: " << endl;
    for (int index = 0; index < size; index++)
    {
        cin >> battery_vals[index];

        if (battery_vals[index] < 20)
        {
            low_readings += 1;
        }
    }

    cout << endl;

    cout << "Battery: ";
    for (int index = 0; index < size; index++)
    {
        cout << battery_vals[index] << " ";
    }

    cout << endl;

    cout << "Low readings (<20%): " << low_readings << endl;

    return 0;
}


