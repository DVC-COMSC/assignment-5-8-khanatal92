#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile (" students.txt");

	if (!inputFile.is_open())

	return 1;

	int numStudents;
	inputFile >> numStudents;

	for (int i = 0; i < numStudents; ++i)
	{
		string name;
		int score1, score2;

		inputFile >> name >> score1 >> score2;
		
	}
}
