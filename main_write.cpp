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
    {
        
    }
}