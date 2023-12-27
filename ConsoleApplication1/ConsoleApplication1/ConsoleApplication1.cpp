#include <iostream>
#include "Helper.h"

using namespace std;


int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)
	{
		cout << "arr 출력" << endl;
		cout << arr[i] << endl;
	}

	int arr2[10] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i < 5; i++)
	{
		cout << "arr2 출력" << endl;
		cout << arr[i] << endl;
	}
}
