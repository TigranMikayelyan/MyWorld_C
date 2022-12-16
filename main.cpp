#include <iostream>
#include "world.h"

bool main_time(int hour)
{
	return !(hour >= 10 && hour <= 22);	
}

extern Animal frog;
extern Light sun;
extern AIR tree;

int main()
{
	int hour = 0;
	std::cout << "Hello my friend i am a frog my name is Bully welcome to my world" << std::endl; 
	std::cout << "Please enter a number between 1-24" << std::endl;
	std::cin >> hour;
		if (main_time(hour))
	{
		sleep(&frog, hour);
		create(&sun, &tree, &shine_count);
		breathes(&tree, &count_of_o2);
		eat(&frog, hour);
		hour += 10;
	}
	sleep(&frog, hour);
}
