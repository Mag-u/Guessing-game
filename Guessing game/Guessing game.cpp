#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int chances = 0;
	int number = 0;
	int startingNumber = 0;
	int endingNumber = 0;
	int copy = 0;
	int guessingNumber = 0;
	string stopProgram = "";
	cout << "Input the starting number: ";
	cin >> startingNumber;
	cout << "Input the ending number: ";
	cin >> endingNumber;
	cout << endl;

	if (startingNumber > endingNumber)															//
	{																					       //
		copy = endingNumber;																  //		
		endingNumber = startingNumber;                                                       //
		startingNumber = copy;                                                                //
	}                                                                                          //
	else if (startingNumber == endingNumber)                                                    // 
	{                                                                                            //
		cout << "The numbers are that same and becouse of it the game can't start" << endl;        //              AS FUNCTION
		cout << "Do you want to input numbers again? Y/N";                                       //
		cin >> stopProgram;                                                                    //
		if (stopProgram != "Y")                                                                //
		{                                                                                       //
			exit(0);                                                                             //
		}                                                                                         //
	}																							   //

	cout << "Input the number of chances for guess: ";
	cin >> chances;
	number = rand() % startingNumber+ endingNumber;
	cout << endl << "Start guessing: ";
	while (guessingNumber != number)
	{
		cout << "You have " << chances << " lives " << endl;
		cin >> guessingNumber;
		chances--;
		if (chances == 0)
		{
			cout << "You lost"<<endl;
			cout << "The number was: " << number;
			exit(0);
		}
	}

	if (guessingNumber == number)
	{
		cout << "Congratulation you have won";
	}
}
