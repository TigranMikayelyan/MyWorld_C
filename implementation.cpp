#include <iostream>
#include <chrono>
#include <thread>
#include "world.h"

Animal frog;
AIR tree;
Light sun;

void waiting()
{
    for (int i = 0; i < 30; ++i)
    {
        std::cout << "- ";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}

bool time(int hour)
{
	return (hour >= 10 && hour <= 22);	
}

void eat(Animal* frog, int hour)
{
	waiting();
	std::cout << "I am very hungry and now i am eating grass" << std::endl;
	if (time(hour))
	{
		while (frog->grass)
		{
			++frog->stomach;
			--frog->grass;
		}
	}
	waiting();
	std::cout << "I ate my grass and now i am very happy" << std::endl;
}

bool sleep(Animal* frog, int hour)
{
	if (time(hour))
	{
		waiting();
		std::cout << "It got dark and i must go to sleep goodbye my friend i hope that we meet 🖖🏿" << std::endl;
		return true;
	}
	else
	{
		std::cout << "It's daytime and i need oxygen" << std::endl;
		return false;
	}
	return false;
}

void breathes(AIR* obj, int(*ptr)(AIR* obj))
{
	int air_count = count_of_o2(&tree);
	if (air_count)
	{
		air_count--;
	}
}

int shine_count(Light* sun)
{
	return sun->shine;
}

int count_of_o2(AIR* tree)
{
	return tree->O2;
}

void create(Light* obj_s, AIR* obj_t, int(*ptr)(Light* obj_s))
{
    int out_light_count = shine_count(&sun);
    while (out_light_count)
    {
        obj_t->O2 += 2;
        out_light_count--;
    }
	waiting();
	std::cout << "Thank the tree for giving me oxygen: I accepted oxygen" << std::endl;
}
