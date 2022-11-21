/*
Josh Bechtel
This is the 'Pirates vs Ninjas program,
You select either pirates or ninjas and then a winner is selected based on how many
attacks successfully landed.
*/


#include <iostream>
#include <ctime>
#include <algorithm>
#include "PiratesVsNinjas.h"

using namespace std;

int main()
{
	//Strings used in main defined below
	string uName;
	string PoN;
	string YoN;
	string endGame;
	//Class objects defined below
	Ninja Ninjaplayer;
	Pirate PirateNPC;
	Pirate Pirateplayer;
	Ninja NinjaNPC;

	//Changes the seed for randomization based on the computers internal clock.
	srand(time(NULL));
	
	do {
		//Introduction to the program
		cout << "\t\t\t\tWelcome to\n";
		cout << "\t\t\t\tPirates Vs Ninjas!\n\n\n";
		cout << "Hello!\n" << "What is your name?\n";
		cin >> uName;//User input to get their name.
		cout << "You will select either Pirate or Ninja, they will then battle and a winner is determined when the opposing team reaches 0 health\n";
		cout << "Please select Pirate or Ninja (Enter 'P' for pirate or 'N' for Ninja)\n";
		cin >> PoN;//User input to select pirate or ninja
		
		if (PoN == "P")
		{
			
			Pirateplayer.getName(uName);
			Pirateplayer.setHealth(100);//Pirateplayer health is set to 100
			Pirateplayer.Help();
			cout << "An enemy Ninja is approaching...\n";
			NinjaNPC.setHealth(100); //NinjaNPC health is set to 100
			cout << "The Ninja attacks first!\n";
			while (Pirateplayer.getHealth() >= 1 && NinjaNPC.getHealth() >= 1)//While loop to constantly run attacks while player / NPC health are greater than or equal to 1
			{
				NinjaNPC.ThrowStars();//ThrowStars phrase is called.
				Pirateplayer.setHealth(NinjaNPC.attack(Pirateplayer.getHealth()));//This line controls attacks, utilizes getHealth to input the current health into the attack method and then uses setHealth method to update the health.
				cout << "You attack next.\n";
				Pirateplayer.UseSword();
				NinjaNPC.setHealth(Pirateplayer.attack(NinjaNPC.getHealth()));
				cout << "The Ninja attacks again!\n";
				
			}
			if (NinjaNPC.getHealth() <= 0)// If the NPC health is less than or equal to 0, the player wins.
			{
				Pirateplayer.Talk("Alas! I have won!\n");
				Pirateplayer.Talk(uName, ", Congratulations!\n");
				cout << "Would you like to play again? (Y or N)\n";//asks user if they would like to play again
				cin >> YoN;
				if (YoN == "Y")// If yes, the player and NPC health gets set back to 100.
				{
					Pirateplayer.setHealth(100);
					NinjaNPC.setHealth(100);
				}
				else if (YoN == "N")// If no, endGame is set to true which breaks out of the do while loop.
				{
					endGame = "true";
				}

			}
			if (Pirateplayer.getHealth() <= 0)//If the player health is less than or equal to 0, the player loses.
			{
				cout << "You have lost, Character has expired...\n";
				cout << "Would you like to play again? (Y or N)\n";
				cin >> YoN;
				if (YoN == "Y")
				{
					Pirateplayer.setHealth(100);
					NinjaNPC.setHealth(100);
				}
				else if (YoN == "N")
				{
					endGame = "true";
				}
			}


		}
		//Same code as above, expect the player is now the Ninja.
		else if (PoN == "N")
		{
			Ninjaplayer.getName(uName);
			Ninjaplayer.setHealth(100);
			Ninjaplayer.Help();
			cout << "An enemy Pirate is approaching...\n";
			PirateNPC.setHealth(100);
			cout << "The Ninja attacks first!\n";
			while (Ninjaplayer.getHealth() >= 1 && PirateNPC.getHealth() >= 1)
			{
				PirateNPC.UseSword();
				Ninjaplayer.setHealth(PirateNPC.attack(Ninjaplayer.getHealth()));
				cout << "You attack next.\n";
				Ninjaplayer.ThrowStars();
				PirateNPC.setHealth(Ninjaplayer.attack(PirateNPC.getHealth()));
				cout << "The Ninja attacks again!\n";

			}
			if (PirateNPC.getHealth() <= 0)
			{
				
				Ninjaplayer.Talk("I have won!\n");
				Ninjaplayer.Talk(uName, ", Congratulations!\n");
				cout << "Would you like to play again? (Y or N)\n";
				cin >> YoN;
				if (YoN == "Y")
				{
					Pirateplayer.setHealth(100);
					NinjaNPC.setHealth(100);
				}
				else if (YoN == "N")
				{
					endGame = "true";
				}

			}
			if (Ninjaplayer.getHealth() <= 0)
			{
				cout << "You have lost, Character has expired...\n";
				cout << "Would you like to play again? (Y or N)\n";
				cin >> YoN;
				if (YoN == "Y")
				{
					Pirateplayer.setHealth(100);
					NinjaNPC.setHealth(100);
				}
				else if (YoN == "N")
				{
					endGame = "true";
				}
			}


		}


	} while (endGame.empty());//The code contained in the do while loop will run while endGame is empty.

	cout << "Thank you for playing!\n";
	

	
}