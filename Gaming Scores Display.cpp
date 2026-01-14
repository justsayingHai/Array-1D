#include <iostream>

using namespace std;

int main()
{
	const int size = 5;
	int scores[size];

	for (int index = 0; index < size; index++)
	{
		cin >> scores[index];
	}

	cout << "Scores: ";

	for (int index = 0; index < size; index++)
	{
		cout << scores[index] << " ";
	}

	return 0;
}


