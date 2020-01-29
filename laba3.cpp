#include <iostream>

struct someStruct
{
	int i;
	char c;
	double d;
	bool b;
	
};

struct anotherStruct
{
	bool b;
	char c;
	int i;
	double d;
};

#pragma pack(1)
struct lastStruct
{
	int i;
	char c;
	double d;
	bool b;
};
#pragma pack()

int main()
{
	someStruct ss;
	anotherStruct as;
	lastStruct ls;
	
	std::cout << "someStruct:\n" 
		<< sizeof(someStruct) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &ss.i << " " << (void*)&ss.c << " " << &ss.d << " " << &ss.b << "\n\n";
	
	std::cout << "anotherStruct:\n" 
		<< sizeof(anotherStruct) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &as.b << " " << (void*)&as.c << " " << &as.i << " " << &as.d << "\n\n";
		
	std::cout << "lastStruct:\n" 
		<< sizeof(lastStruct) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &ls.i << " " << (void*)&ls.c << " " << &ls.d << " " << &ls.b << "\n\n";
}