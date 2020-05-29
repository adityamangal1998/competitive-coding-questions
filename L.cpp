#include<fstream>
#include<iostream>
#include <sstream>
#include <bits/stdc++.h>
//#include <chrono>
//using namespace std::chrono;
using namespace std;

int main()
{
		// Creation of ifstream class object to read the file 
	ifstream fin; 
	// by default open mode = ios::in mode 
	fin.open("loo.txt"); 
	if(!fin)
		{
			cout<<"file not found";
			return 0;
		}
	int i = 0;
	string line;	
	int a[104859];
	// Execute a loop until EOF (End of File) 
	while (fin) { 

		// Read a Line from File 
		fin>>a[i];
		// Print line in Console 
		cout << a[i] << endl;
		i++;
	} 
	int n = i;
	// Close the file 
	fin.close();
	

	int foo;

	cout << "Enter the Element to search : ";
	cin >> foo;
	bool ok = 0;
    //auto start = high_resolution_clock::now();

	for (int i = 0; i < n; i++)
	{
		if (a[i] == foo)
		{
			cout << "Element found at " << i + 1 << " position\n";
			ok = 1;
			break;
		}
	}

	//auto stop = high_resolution_clock::now();

	if (!ok)
		cout << "Element not found\n";
	//cout << "\nTime:" << duration_cast<microseconds>(stop - start).count() << " nano";
	return 0;

}
