#include <iostream>

const int arrSize = 4;
int staticArray[arrSize];
int static2DArray[arrSize][arrSize];
	
int main()
{
	int *dynamicArray = new int[arrSize];
	
	int **dynamic2DArray;
	dynamic2DArray = new int*[arrSize];
	for (int i = 0; i < arrSize; ++i)
		dynamic2DArray[i] = new int[arrSize];
	
	std::cout << "Static 1-D: " << "\n" << " ";
	for (int i = 0; i < arrSize; ++i)
		std::cout << &staticArray[i] << " ";
	
	std::cout << "\n" << "\n";
	
	std::cout << "Static 2-D: " << "\n" << " ";
	for (int i = 0; i < arrSize; ++i)
	{
		for (int j = 0; j < arrSize; ++j)
			std::cout << &static2DArray[i][j] << " ";
		std::cout << "\n" << " ";
	}
	std::cout << "\n";
	
	std::cout << "Dynamic 1-D: " << "\n" << " ";
	for (int i = 0; i < arrSize; ++i)
		std::cout << &dynamicArray[i] << " ";
	
	std::cout << "\n" << "\n";
	
	std::cout << "Dynamic 2-D: " << "\n" << " ";
	for (int i = 0; i < arrSize; ++i)
	{
		for (int j = 0; j < arrSize; ++j)
			std::cout << &dynamic2DArray[i][j] << " ";
		std::cout << "\n" << " ";
	}
	std::cout << "\n";
}
