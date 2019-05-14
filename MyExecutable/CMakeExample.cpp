// CMakeExample.cpp : Defines the entry point for the application.
//

#include "CMakeExample.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	nlohmann::json t = { {"test","json"} };

	cout << "Json: " << t;
	return 0;
}
