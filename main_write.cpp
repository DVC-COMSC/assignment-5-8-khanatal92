#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("students.txt");

    if (!outputFile.is_open())
        return 1;
    
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    outputFile << numStudents << endl;

    for (int i = 0; i < numStudents; ++i)
    {
        string name;
        int score1, score2;

        cout << "Enter students information (Name and two scores) for student " << i * 1 << ": ";
        cin >> name >> score1 >> score2;
        outputFile << name << " " << score1 << " " << score2 << endl;
    }
    
    outputFile.close();

    cout << "Student information has been written to students.txt." << endl;

    return 0;
}