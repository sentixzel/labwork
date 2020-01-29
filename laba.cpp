#include <iostream>

bool globalBool;
char globalChar;
int globalInt;
double globalDouble;


int main()
{
	bool localBool;
	bool *dynamicBool = new bool;
	
	char localChar;
	char *dynamicChar = new char;
	
	int localInt;
	int *dynamicInt = new int;
	
	double localDouble;
	double *dynamicDouble = new double;
	
	std::cout
		<< "Boolean" << "\n"
		<< &globalBool << "\n"
		<< &localBool << "\n"
		<< dynamicBool << "\n"
		<< "\n"
		<< "Char" << "\n"
		<< (void*)&globalChar << "\n"
		<< (void*)&localChar << "\n"
		<< (void*)dynamicChar << "\n"
		<< "\n"
		<< "Integer" << "\n"
		<< &globalInt << "\n"
		<< &localInt << "\n"
		<< dynamicInt << "\n"
		<< "\n"
		<< "Double" << "\n"
		<< &globalDouble << "\n"
		<< &localDouble << "\n"
		<< dynamicDouble << "\n";
		
	delete dynamicInt;
	delete dynamicBool;
	delete dynamicChar;
	delete dynamicDouble;
	return 0;
}