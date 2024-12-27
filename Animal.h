#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

using namespace std;

class Animal	
{
public:
	Animal() {}
	virtual void makeSound() {};
private:
};

class Dog : public Animal
{
public:
	void makeSound();
};

class Cat : public Animal
{
public:
	void makeSound();
};

class Cow : public Animal
{
public:
	void makeSound();
};
#endif