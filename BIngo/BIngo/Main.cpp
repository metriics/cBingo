#include <iostream>
#include <stdlib.h> //rand, srand
#include <string>

using namespace std;

<<<<<<< HEAD
int main() 
{

=======
int B [5] = { }; // these are our arrays. One per column. 
int I [5] = { }; // it is possible to do 2d arrays (tables)
int N [4] = { }; // but i thought id keep it simple for now.
int G [5] = { };
int O [5] = { };

int randNumGen(char col, int list) { // this function takes in the column (through char col argument) and gives random numbers based on that col. N only need 4 because of the FREE square
	if (col == 'N') { // if col is N, we onl need 4 nums
		
	}

	else { // if col is not N, we need 5

	}
}

int main() 
{ // main program

	//Rebecca's random number generator start
	int Number;
	std::string Again;
	bool End;

	End = false;

	//Simple rolling Loop
	while (End == false)
	{
		Number = rand() % 75 + 1; //Number decider

		if (Number < 16)
		{
			std::cout << "\nB: " << Number << ".\n";
		}
		else if (Number < 31)
		{
			std::cout << "\nI: " << Number << ".\n";
		}
		else if (Number < 46)
		{
			std::cout << "\nN: " << Number << ".\n";
		}
		else if (Number < 61)
		{
			std::cout << "\nG: " << Number << ".\n";
		}
		else
		{
			std::cout << "\nO: " << Number << ".\n";
		}

		std::cout << "\nWould you like to roll again?\n";
		std::cin >> Again;
		if (Again == "Yes" || Again == "yes")
		{
			continue;
		}
		else
		{
			End = true;
		}
		
	}
	//Rebecca's random number generator end

	return 0;
>>>>>>> e8165199b1707d421ee1279edcc356811e0f779c
}

//Rebecca is just testing something with this comment