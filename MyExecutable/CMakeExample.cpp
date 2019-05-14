// CMakeExample.cpp : Defines the entry point for the application.
//

#include "CMakeExample.h"

using namespace std;

int main()
{
	cout << "Test the 3rd party library" << endl;

	nlohmann::json t = { 
		{"test","json"} 
	};

	cout << "Json: " << t << endl;


	cout << "Test my static library" << endl;

	cout << MyStaticLib::Add(3, 4);

	return 0;
}
