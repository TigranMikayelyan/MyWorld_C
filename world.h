#ifndef WORLD_H
#define WORLD_H
struct Light // Sun
{
	int shine = 2;
};

struct AIR // tree
{
	int O2;
};

struct Animal
{
	int stomach = 0;
	int grass = 50;
};

int count_of_o2(AIR*);
int shine_count(Light*);
void create(Light*, AIR*, int(*ptr)(Light*));
void eat(Animal*, int);
bool sleep(Animal*, int);
void breathes(AIR*, int(*ptr)(AIR*));
void print();

#endif // WORLD_H
