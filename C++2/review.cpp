#include <fstream> //use this to work with files
#include <iostream> //use this to use cout and cin
#include <string> // for strings
using namespace std;

//get input
cin >> name1;
//Output file stream. You create an object of this data type when you want to create a file and write data to it.
ofstream

//Input file stream. You create an object of this data type when you want to open an existing file and read data from it.
ifstream

//File stream. Objects of this data type can be used to open files for reading, writing, or both.
fstream

//example of opening a file for reading
ifstream inputFile; 
inputFile.open("Customers.txt");

//example of opening a file for writing
ofstream outputFile; 
outputFile.open("Employees.txt");

//define and open in one line
ofstream outputFile("Employees.txt");

//always be closing
inputFile.close();

//write to a file using <<
outputFile << "I love C++ programming\n";
outputFile << "Price: " << price << endl;

//reading from a file
inputFile >> name;
//note reading from a file starts at the start of the file, and will read up to a whitespace character
//the read position is then set immediately after the /n character (or tab,etc.)

//use a loop to write to a file
// Get the sales for each day and write it
// to the file.
for (int count = 1; count <= numberOfDays; count++)
{
// Get the sales for a day.
cout << "Enter the sales for day "
<< count << ": ";
cin >> sales;
// Write the sales to the file.
outputFile << sales << endl;
}

//looping through a file without knowing the end
while (inputFile >> number)

//always make sure a file opens successfully
if (inputFile)

//use a variable provided by the user to let them select the file nam
cin >> filename;

//when creating functions put a definition
//*****************************************
// Function main                          *
//*****************************************

// Function Prototypes
void first();
void second(int); //put above main, the name of the arguement is not required here

// Global constants
const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5; // Overtime multiplier

//use static variables in functions to persist the values
static int statNum; //they are only initialized the first time

//you can use default arguements by declaring them in the func prototype
void showArea(double length = 20.0, double width = 10.0);

//note they don't have to be in the func definition, but they do if there is no prototype
void showArea(double length, double width) {
double area = length * width;
cout << "The area is " << area << endl; }
//note you cannot skip arguements; default arguements must be defined last if there is a mix

//using reference variables in funcs
//use &
void doubleNum(int &refVar) {
refVar *= 2; }

//& with prototypes, it must also appear in the func header
void doubleNum(int &);
//note only variables can be passed in

//&with more than one paramater
void addThree(int &, int &, int &, int &);