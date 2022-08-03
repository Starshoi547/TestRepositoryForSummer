#include "Header.h"

int main()
{
	int size = 10;

    //cout << "Hello World!\n";
	for (int i = 0; i < size; i++)
	{
		cout << i << " Times" << endl;

		//if (i >= 6) 
		//{
		//	cout << "No" << endl;
		//	return 0;
		//}
	}

	int rand = RandomNumbersComm(0);
	cout << "Your random number is: " << rand << endl;
	return 0;
}

