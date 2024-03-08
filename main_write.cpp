#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{	
	ofstream ofs;
	ofs. open("student.txt");
	if (!ofs) {
		cout << "Open Error\n";
		exit(0);
	}
	int N; 
	int M = 2; 
	double average, score, sum = 0;
	string studentName;
do{
	cout << "Enter the number of students: " ;
	cin >> N;
	if (N < 0)
		cout << "Invalid Input. Please try again\n ";		
} while (N < 0);
	
	for(int i=0; i<N; i++)
	{
		sum = 0;
		cout << "What is the name of the student \n";
		cin >> studentName;
		for (int j=0; j < M; j++)
		{
			cout << "What is the score for " << studentName << endl;
			cin >> score;
			sum += score;
		}
		average = sum / M;
		cout << studentName << "sum: " << sum << " average: " << average << endl;
	
	}
	ofs.close(); 
    	cout << "Data has been written to student.txt." << endl;
    	return 0;
}
