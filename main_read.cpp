#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile ("students.txt");

	if (!inputFile.is_open())
	return 1;

	int numStudents;
	inputFile >> numStudents;

	for (int i = 0; i < numStudents; ++i)
	{
		string name;
		int score1, score2;

		inputFile >> name >> score1 >> score2;

		int sum = score1 + score2;
		double average = static_cast<double>(sum);

		cout << "Student Name: " << setw(10) << left << name << endl;
		cout << " Score1: " << setw(4) << score1 << endl;
		cout << " Score2: " << setw(4) << score2 << endl;
		cout << " Sum: " << setw(4) << sum << endl;
		cout << " Avg: " << setw(4) << fixed << setprecision(2) << average << endl;
}
	inputFile.close();

	return 0;
}
