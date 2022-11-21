#pragma once
/*
This header file is used to contain the classes for PiratesVsNinjas.
*/
#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;

class GameStructure
{
public:
	virtual void Help();
};

class Character : public GameStructure
{
public:
	int getHealth();//Gets current health
	virtual string getName(string x);//Gets name, accepts string for input
	void setHealth(int x);//Used for modifying the health
	void Talk(string stuffToSay);//Talk methods declared here
	void Talk(string name, string stuffToSay);
	virtual int attack(int cHealth);//Attack method
	void Help() override;//Help method overriden from GameStructure class.

protected:
	//Protected variables used in some of the methods above.
	string name;
	int hitPoint;
private:
	int health;

};

class Ninja : public Character
{
public:
	Ninja();//Constructor
	~Ninja();//Destructor
	void ThrowStars();//ThrowStars method
	int attack(int cHealth) override;//Attack method overriden from Character class.
	void Help() override;//Help method overriden from GameStructure class.
	string getName(string x) override; //Get name method overriden from Character class

private:

};

class Pirate : public Character
{
public:
	Pirate();//Constructor
	~Pirate();//Destructor
	void UseSword();
	int attack(int cHealth) override;//Attack method overriden from Character class.
	void Help() override;//Help method overriden from GameStructure class.
	string getName(string x) override;//Get name method overriden from Character class

private:

};