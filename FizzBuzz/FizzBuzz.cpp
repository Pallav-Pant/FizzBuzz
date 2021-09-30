#include <iostream>
#include <string>
using namespace std;

int lastDig = 100;//Digit till where the program runs

int main()
{
	const int arrLength = 3;

	int arr[arrLength] = { 3,5,7 };//Numbers on which you are supposed to type
	string message[arrLength] = {"Fizz", "Buzz", "Boom"};//Message pertaining to each number

	


	for (int i = 1; i <= lastDig; i++ )
	{
		string output = "";
		for (int b = 0; b < arrLength; b++)
		{
			
			if (i % arr[b] == 0)
			{
				output += message[b];
			}
			

		}
		if (output == "")
		{
			cout << i;
		}

		else
		{
			cout << output;
		}
		
		cout << endl;

	}

	return 0;
}