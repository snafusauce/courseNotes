#include <fstream> //use this to work with files
#include <iostream> //use this to use cout and cin
#include <string> // for strings
#include <cstdlib> // Needed for the exit function; call exit(0);
#include <vector>
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

//overloading function means to use the same name for different functions, this is okay as long as the parameters are different

//read values from a file into an array
// Open the file.
ifstream inputFile;
inputFile.open("TenNumbers.txt");

// Read the numbers from the file into the array.
while(count < ARRAY_SIZE && inputFile >> numbers[count])
    count++;

// Close the file.
inputFile.close();

//writing from an array to a file
ofstream outputFile;

// Open a file for output. 
outputFile.open("SavedNumbers.txt");

// Write the array contents to the file.
for (count = 0; count < ARRAY_SIZE; count++)
outputFile << numbers[count] << endl;

// Close the file. 
outputFile.close();

//for range for loop, this is just a copy
for (int val : numbers) 
    cout << val << endl;

//for range for loop with a reference, not a copy
// Get values for the array. 
for (int &val : numbers)
{
cout << "Enter an integer value: ";
cin >> val; }

//arrays are arguments
void showValues(int nums[], int size)
//note the array is passed by reference

//contant arrays passed as arguments
void showValues(const int nums[], int size)

//2d arrays, these are rows by columns
double scores[3][4];

//example of 2d array
int hours[3][2] = {
    {8, 5}, 
    {7, 9},
    {6, 3}
    };

//sum the elements of a 2d array
// Sum the array elements.
for (int row = 0; row < NUM_ROWS; row++) {
    for (int col = 0; col < NUM_COLS; col++) 
    total += numbers[row][col];
}

//validation
while(num >10){
    cin >> num;
}

//using vectors; arraylist in java
vector<int> numbers;

//set a vector's size, and set all the values to something
vector<int> numbers(10, 2);

//initialize vector with a list of values
vector<int> numbers { 10, 20, 30, 40 };

//for each loop with refrence variables vector example
// Get values for the vector elements. 
for (int &val : numbers)
{
cout << "Enter an integer value: ";
cin >> val; }

//use .pushback to add to a vector if full or without a size
numbers.push_back(25);

//.size() to get the size of a vector

//use .popback() to remove the last element in a vector
collection.pop_back();

//use .clear() to clear out a vector
numbers.clear();

//.empty() to check vector