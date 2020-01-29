#include <iostream> 

struct human
{
	int age;
	char gender;
	double weight;
	bool married;
};

struct road
{
	bool closed;
	char type;
	int maxSpeed;
	double length;
}

#pragma pack(1)
struct animal
{
	int population;
	char color;
	double avrgMigration;
	bool wild;
}
#pragma pack()

int main()
{
	human Bill;
	road countryRoad;
	animal lion;
	std::cout << "Human:\n"
		<< sizeof(human) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &Bill.i << " " << (void*) &Bill.c << " " << &Bill.d << " " << &Bill.b << "\n"; 

	std::cout << "road:\n" 
		<< sizeof(road) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &countryRoad.closed << " " << (void*)&countryRoad.type << " " << &countryRoad.maxSpeed << " " << &countryRoad.length << "\n\n";
		
	std::cout << "animal:\n" 
		<< sizeof(animal) << " V " << sizeof(int) + sizeof(char) + sizeof(double) + sizeof(bool) << "\n"
		<< &lion.population << " " << (void*)&lion.color << " " << &ls.avrgMigration << " " << &lion.wild << "\n\n";
}
