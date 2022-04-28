// Ryan Bieker, CS 3060 001, Chapter 12 Programming Challenges, due 5/3/2022, 
//

#include <iostream>
#include <fstream>

using namespace std;

void toLower(ifstream &fileOne, ofstream &fileTwo);

int main()
{
	//file to change
	ifstream fileOne;
	//file to store changes
	ofstream fileTwo;

	//file names
	string nameOne;
	string nameTwo;

	//user input for file names
	cout << "Enter first file name: ";
	cin >> nameOne;
	cout << "Enter second file name: ";
	cin >> nameTwo;

	fileOne.open(nameOne, ios::in);
	fileTwo.open(nameTwo, ios::out);

	toLower(fileOne, fileTwo);
}

//change first file letters to lowercase and store in second file
void toLower(ifstream &fileOne, ofstream &fileTwo)
{
	char letter;

	//read through file
	while (!fileOne.eof())
	{
		//store each char
		fileOne >> letter;

		if (isupper(letter))
		{
			fileTwo << letter;
		}
		else
		{
			toupper(letter);
			fileTwo << letter;
		}
	}
}