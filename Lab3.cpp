//********************************************************************************
/*
	Aiden Trimble
	C++ Fall 2020
	Due: September 28th
	Lab 3 User and File I/O
	Using files and user interaction to calculate mean and standard deviation
*/
//********************************************************************************


// Libraries used to gain access to needed syntax.
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;

//enables the names to be given integer values
double data1, data2, data3, data4;
double num1, num2, num3, num4;

//Gives names and locations to the input and output files.
string inputFile = "D:/Desktop/C++/Lab 3/inMeanStd.dat";
string outputFile = "D:/Desktop/C++/Lab 3/outMeanStd.dat";

int main()
{
	char answer;
	cout << "\nDo you already have an input file you would like to use? Y/N \n" << endl;
	cin >> answer;

	//runs this chain of code if the user inputted "N" for the answer
	if (answer == 'N')

	{
		{

			//enables the files to be used as input or output files
			ofstream inFile;

			//opens the inputFile
			inFile.open(inputFile);

			//displays text on the screen asking for input
			cout << "\nInput four numbers with a space following each number to find the standard deviation.\n" << endl;
			//allows for the user to input data
			cin >> data1 >> data2 >> data3 >> data4;
			cout << '\n';
			//displays the numbers the user inputted
			cout << "The four numbers you inputted are: " << data1 << ", " << data2 << ", " << data3 << ", " << data4 << endl;
			//outputs the data the user inputted into the input file
			inFile << data1 << " " << data2 << " " << data3 << " " << data4 << " " << endl;

			//closes the input file
			inFile.close();

		}

		{

			//enables the files to be used as input or output files
			ifstream inFile;
			ofstream outFile;

			//opens the inputFile
			inFile.open(inputFile);

			//reads what is in the input file and gives the integers names
			inFile >> num1 >> num2 >> num3 >> num4;

			//opens the outputFile
			outFile.open(outputFile);
			//outputs the inputted numbers into the output file
			outFile << "The inputted numbers are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

			//creates an integer with a value of the sum of the inputted numbers
			int sum = num1 + num2 + num3 + num4;
			//creates a value that is the sum of the numbers divided by four
			double mean = sum / 4.0000;
			//displays the mean value on the screen
			cout << "\nThe Mean of the inputted numbers is: " << setprecision(6) << mean << endl;
			//outputs the mean into the output file
			outFile << "\nThe mean of the inputted numbers is: " << setprecision(6) << mean << endl;

			//creates the calculated standard deviation value
			double StdDeviation = sqrt((pow((num1 - mean), 2) + pow((num2 - mean), 2) + pow((num3 - mean), 2) + pow((num4 - mean), 2)) / 4.0000);
			//displays the standard deviation value onto the screen
			cout << "\nThe Standard Deviation of the inputted numbers is: " << setprecision(6) << StdDeviation << endl;
			//outputs the standard deviation into the output file
			outFile << "\nThe Standard Deviation of the inputted numbers is: " << setprecision(6) << StdDeviation << endl;

			//closes the input and output files
			inFile.close();
			outFile.close();

		}
	}

	//runs this chain of code if the user inputted "Y" for the answer
	if (answer == 'Y')
	
	{

	//enables the files to be used as input or output files
	ifstream inFile;
	ofstream outFile;

	//opens the inputFile
	inFile.open(inputFile);

	//reads what is in the input file and gives the integers names
	inFile >> num1 >> num2 >> num3 >> num4;

	//displays the integers in the file
	cout << "The numbers inputted by the file are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

	//opens the outputFile
	outFile.open(outputFile);
	//outputs the inputted numbers into the output file
	outFile << "The inputted numbers are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

	//creates an integer with a value of the sum of the inputted numbers
	int sum = num1 + num2 + num3 + num4;
	//creates a value that is the sum of the numbers divided by four
	double mean = sum / 4.0000;
	//displays the mean value on the screen
	cout << "\nThe Mean of the inputted numbers is: " << setprecision(6) << mean << endl;
	//outputs the mean into the output file
	outFile << "\nThe mean of the inputted numbers is: " << setprecision(6) << mean << endl;

	//creates the calculated standard deviation value
	double StdDeviation = sqrt((pow((num1 - mean), 2) + pow((num2 - mean), 2) + pow((num3 - mean), 2) + pow((num4 - mean), 2)) / 4.0000);
	//displays the standard deviation value onto the screen
	cout << "\nThe Standard Deviation of the inputted numbers is: " << setprecision(6) << StdDeviation << endl;
	//outputs the standard deviation into the output file
	outFile << "\nThe Standard Deviation of the inputted numbers is: " << setprecision(6) << StdDeviation << endl;

	//closes the input and output files
	inFile.close();
	outFile.close();

	}

return 0;

}