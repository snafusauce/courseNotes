#include <fstream> //use this to work with files
#include <iostream> //use this to use cout and cin

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