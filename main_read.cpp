#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("student.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        exit (0);
    }

    string studentName;
    int score1, score2, sum;
    double average;

    while (inputFile >> studentName >> score1 >> score2 >> sum >> average) {
        
        average = sum / 2.0;

        cout << "Student: " << studentName << endl;
        cout << "Score 1: " << score1 << endl;
        cout << "Score 2: " << score2 << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
        cout << endl;
    }

    inputFile.close();
    return 0;
}
