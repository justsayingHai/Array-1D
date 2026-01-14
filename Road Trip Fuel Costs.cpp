#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int costs[size];

    for (int index = 0; index < size; index++)
    {
        cin >> costs[index];
    }

    cout << "Costs: ";
    for (int index = 0; index < size; index++)
    {
        cout << costs[index] << " ";
    }

    cout << endl;

    int max_cost = costs[0];
    for (int index = 1; index < size; index++)
    {
        if (costs[index] > max_cost)
        {
            max_cost = costs[index];
        }
    }
    cout << "Highest cost: " << max_cost << endl;

    return 0;
}


