/*
Function/Class method definitions for PiratesVsNinjas.
*/

#include <iostream>
#include <ctime>
#include <algorithm>
#include "PiratesVsNinjas.h"
using namespace std;

int Character::attack(int cHealth)
{
	hitPoint = 10;	
	int randIndex = rand() % 2;// A random number is selected either 0 or 1
	if (randIndex == 1) //If the number is 1, the attack will proceed
	{
		cout << "The attack hits the enemy and deals " << hitPoint << " damage\n";
		cHealth -= hitPoint;//Subtracts hitPoint from cHealth and sets cHealth as the result.
		return cHealth;//Returns current health
	}
	else//If the number selected is 0, the attack will miss
	{
		cout << "The attack missed!\n";
		return cHealth;//Returns current health
	}

}
//Constructors/destructors below
Ninja::Ninja()
{

}
Pirate::Pirate()
{
	
}
Ninja::~Ninja()
{

}
Pirate::~Pirate()
{

}

string Pirate::getName(string x)//Lets the user know they are a pirate with their name.
{
	name = x;
	
	cout << "You are a pirate called " << name << endl;
	return name;
}
string Ninja::getName(string x)//Lets the user know they are a ninja with their name.
{
	name = x;

	cout << "You are a ninja called " << name << endl;
	return name;
}
int Ninja::attack(int cHealth)
{
	hitPoint = 25;
	int randIndex = rand() % 2;// A random number is selected either 0 or 1
	if (randIndex == 1) //If the number is 1, the attack will proceed
	{
		cout << "The attack hits the enemy and deals " << hitPoint << " damage\n";
		cHealth -= hitPoint;//Subtracts hitPoint from cHealth and sets cHealth as the result.
		return cHealth;//Returns current health
	}
	else//If the number selected is 0, the attack will miss
	{
		cout << "The attack missed!\n";
		return cHealth;//Returns current health
	}
}
int Pirate::attack(int cHealth)
{
	hitPoint = 25;
	int randIndex = rand() % 2;// A random number is selected either 0 or 1
	if (randIndex == 1) //If the number is 1, the attack will proceed
	{
		cout << "The attack hits the enemy and deals " << hitPoint << " damage\n";
		cHealth -= hitPoint;//Subtracts hitPoint from cHealth and sets cHealth as the result.
		return cHealth;//Returns current health
	}
	else//If the number selected is 0, the attack will miss
	{
		cout << "The attack missed!\n";
		return cHealth;//Returns current health
	}
}
void Ninja::Help()
{
	cout << "Ninja's are really cool, their ability is throwing stars." << endl;
}
void Pirate::Help()
{
	cout << "Pirates's are really cool, they attack using their sword." << endl;
}
void Ninja::ThrowStars()
{
	cout << "I am throwing stars!" << endl;
}
void Pirate::UseSword()
{
	cout << "I am swinging my sword!" << endl;
}
int Character:: getHealth()
{
	return health;//Returns current health
}
void Character::setHealth(int x)
{
	health = x;//health is set to x
}
void Character::Talk(string stuffToSay)//Talk method with single string input
{
	cout << stuffToSay << endl;
}
void Character::Talk(string name, string stuffToSay)//Talk method with 2 string input.
{
	cout << name << stuffToSay << endl;
}
void Character::Help()
{

}
string Character::getName(string x)
{
	return name;
}
void GameStructure::Help()
{

}