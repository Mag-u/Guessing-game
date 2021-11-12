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
	srand(time(NULL));
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
	chances = chances + 1;
	cout << "Input the number of chances for guess: ";
	cin >> chances;
	number = rand() % (endingNumber+1-startingNumber)+startingNumber;
	cout << endl << "Start guessing: ";
	while (guessingNumber != number)
	{
		if (chances!=1)
		{
			cout << "You have " << chances << " lives " << endl;

		}
		else {
			cout << "You have " << chances << " live " << endl;

		}
		cin >> guessingNumber;
		if (chances == 0)
		{
			cout << "You lost"<<endl;
			cout << "The number was: " << number;
			exit(0);
		}
	

	if (guessingNumber == number)
	{
		cout << "Congratulation you have won";
	}
	chances--;
	}
}
