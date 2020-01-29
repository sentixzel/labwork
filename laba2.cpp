#include <iostream>

int staticArray[4];
int static2DArray[4][4];
	
int main()
{
	int *dynamicArray = new int[4];
	
	int **dynamic2DArray;
	dynamic2DArray = new int*[4];
	for (int i = 0; i < 4; ++i)
		dynamic2DArray[i] = new int[4];
	
	std::cout << "Static 1-D: " << "\n" << " ";
	for (int i = 0; i < 4; ++i)
		std::cout << &staticArray[i] << " ";
	
	std::cout << "\n" << "\n";
	
	std::cout << "Static 2-D: " << "\n" << " ";
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
			std::cout << &static2DArray[i][j] << " ";
		std::cout << "\n" << " ";
	}
	std::cout << "\n";
	
	std::cout << "Dynamic 1-D: " << "\n" << " ";
	for (int i = 0; i < 4; ++i)
		std::cout << &dynamicArray[i] << " ";
	
	std::cout << "\n" << "\n";
	
	std::cout << "Dynamic 2-D: " << "\n" << " ";
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
			std::cout << &dynamic2DArray[i][j] << " ";
		std::cout << "\n" << " ";
	}
	std::cout << "\n";
}