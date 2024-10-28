#include <iostream>
#include <iomanip>
using namespace std;

class Economics
{
public:
	int mathematics;
	int econometrics;
	int informatics;
	Economics(int mathematics1, int econometrics1, int informatics1)
	{
		mathematics = mathematics1;
		econometrics = econometrics1;
		informatics = informatics1;
	}
};

class Linguistics
{
public:
	int language;
	int ancient;
	int literature;
	Linguistics(int language1, int ancient1, int literature1)
	{
		language = language1;
		ancient = ancient1;
		literature = literature1;
	}
};

int main()
{
	double averageEconomics;
	double averageLinguistics;
	double overall;
	int numberOfStudents;
	string studentName;

	// Economics
	int mathematicsGrade;
	int econometricsGrade;
	int informaticsGrade;

	// Linguistics
	int languageGrade;
	int ancientGrade;
	int literatureGrade;

	cout << "How many students will you enter?" << endl;
	cin >> numberOfStudents;

	int *Grades = new int[numberOfStudents];

	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << endl
			 << "Student name " << i + 1 << ":" << endl;
		cin >> studentName;

		// Economics
		cout << "Mathematics grade:";
		cin >> mathematicsGrade;

		cout << "Econometrics grade:";
		cin >> econometricsGrade;

		cout << "Informatics grade:";
		cin >> informaticsGrade;

		Economics studentEconomics(mathematicsGrade, econometricsGrade, informaticsGrade);

		averageEconomics = (studentEconomics.econometrics + studentEconomics.mathematics + studentEconomics.informatics) / 3;

		// Linguistics
		cout << "Language grade:";
		cin >> languageGrade;

		cout << "Ancient grade:";
		cin >> ancientGrade;

		cout << "Literature grade:";
		cin >> literatureGrade;

		Linguistics studentLinguistics(languageGrade, ancientGrade, literatureGrade);

		averageLinguistics = (studentLinguistics.ancient + studentLinguistics.language + studentLinguistics.literature) / 3;

		overall = (averageLinguistics + averageEconomics) / 2;
		cout << setprecision(1) << fixed;
		cout << "The average of " + studentName << " in Economics is " << averageEconomics << " and in Linguistics is " << averageLinguistics << ". The overall average is " << overall << endl;

		Grades[i] = overall;
	}
	int k;
	for (int i = 1; i < numberOfStudents; i++)
	{
		if (Grades[0] < Grades[i])
		{
			k = i;
			Grades[0] = Grades[i];
		}
	}

	cout << "Student " << k << " has the highest grade of " << Grades[0] << " out of 20!" << endl;
}

/*
class Economics
{
public:
	int mathematics;
	int econometrics;
	int informatics;
	Economics(int mathematics1, int econometrics1, int informatics1)
	{
		mathematics = mathematics1;
		econometrics = econometrics1;
		informatics = informatics1;
	}
};

class Linguistics
{
public:
	int language;
	int ancient;
	int literature;
	Linguistics(int language1, int ancient1, int literature1)
	{
		language = language1;
		ancient = ancient1;
		literature = literature1;
	}
};

int main()
{
	Economics Mihalis(17, 20, 15);
	Economics Giannis(13, 11, 19);
	Linguistics Mihalis(20, 18, 16);
	Linguistics Giannis(18, 19, 20);
}
*/