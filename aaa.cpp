/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream> 

/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream> 

using namespace std; 

// Driver Code 
int main() 
{ 
	// Creation of ofstream class object 
	ofstream fout; 

	string line; 

	// Creation of ifstream class object to read the file 
	ifstream fin; 

	// by default open mode = ios::in mode 
	fin.open("aditya.txt"); 

	// Execute a loop until EOF (End of File) 
	while (fin) { 

		// Read a Line from File 
		getline(fin, line); 

		// Print line in Console 
		cout << line << endl; 
	} 

	// Close the file 
	fin.close(); 

	return 0; 
} 

