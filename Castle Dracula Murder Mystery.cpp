// Last update: 20/09/2023
// Start date: 20/09/2023
// By Max Tittle, Vasile-Daniel Dan, Erica Taylor
// UK

#include <iostream>

#include "Room.h"

using namespace std;

int main()
{
	std::cout << "OOPs I did an Adventure Game\n";



	//set up game objects
		//Set up the Rooms
	Room entranceWay = Room("the entrance-way");
	entranceWay.setDescription("entrance-way");
	Room courtyard = Room("the courtyard");
	courtyard.setDescription("courtyard");
	Room throneRoom = Room("the throne room");
	throneRoom.setDescription("thrones");
	Room library = Room("the library");
	library.setDescription("library");
	Room queenMariesApt = Room("Queen Marie's apartment");
	queenMariesApt.setDescription("The apartments");
	Room observatory = Room("the observatory tower");
	observatory.setDescription("an old observatory tower");
	Room restaurant = Room("the restaurant");
	restaurant.setDescription("A restaurant");
	Room weaponRoom = Room("the weapon's room");
	weaponRoom.setDescription("a room of ancient weapons");
	Room orientalRoom = Room("the Oriental room");
	orientalRoom.setDescription("a room of artifacts");


	//Set up the Characters
	Character inspector = Character("Inspector", { "he", "him" });

	Character princess = Character("Penelope", { "she", "her" });
	princess.setDescription("a young, very beautiful woman with bright red hair that is cut short into a fashionable bob. She wears a sleek blue dress with subtle rhinestones.");
	princess.setKeyWords({ "knife" });
	princess.setPromptedLine({ "I don't know anything about the knife" });

	Character baroness = Character("Helena Van Arsdale", { "she", "her" });

	Character worker = Character("Andrzej", { "he", "him" });

	Character madame = Character("Madame Ionescu", { "she", "her" });


	//link up the rooms
	entranceWay.linked_rooms["north"] = &courtyard;
	courtyard.linked_rooms["north"] = &throneRoom;
	courtyard.linked_rooms["east"] = &restaurant;
	courtyard.linked_rooms["south"] = &entranceWay;
	courtyard.linked_rooms["west"] = &queenMariesApt;
	throneRoom.linked_rooms["south"] = &courtyard;
	restaurant.linked_rooms["west"] = &courtyard;
	restaurant.linked_rooms["north"] = &weaponRoom;
	restaurant.linked_rooms["south"] = &orientalRoom;
	weaponRoom.linked_rooms["south"] = &restaurant;
	orientalRoom.linked_rooms["north"] = &restaurant;
	queenMariesApt.linked_rooms["east"] = &courtyard;
	queenMariesApt.linked_rooms["north"] = &library;
	queenMariesApt.linked_rooms["south"] = &observatory;
	library.linked_rooms["south"] = &queenMariesApt;
	observatory.linked_rooms["north"] = &queenMariesApt;


	//Link the characters to the rooms
	entranceWay.linked_Characters["princess"] = &princess;
	entranceWay.linked_Characters["madame"] = &madame;

	restaurant.linked_Characters["worker"] = &worker;

	queenMariesApt.linked_Characters["baroness"] = &baroness;

	//Link the clues to the rooms




	Room* currentRoom = &entranceWay;
	Character* currentChar = &inspector;
	string command;
	bool changeRoom = true;
	do
	{
		//if you change rooms you get a description, this only runs the first time you enter a room
		if (changeRoom == true)
		{
			//giving you a description of the room
			cout << "Looking around "
				+ currentRoom->getName()
				+ " you see "
				+ currentRoom->getDescription()
				+ "\n";
			changeRoom = false;
			//telling you what characters are in the room
			if (!currentRoom->linked_Characters.empty())
			{
				// Get an iterator pointing to the first element in the map

				map<string, Character*>::iterator it = currentRoom->linked_Characters.begin();

				// Iterate through the map and print the elements
				cout << "in this room you see:\n";
				while (it != currentRoom->linked_Characters.end())
				{
					cout << it->first << "\n";
					++it;
				}
			}
		}


		cout << "> ";
		cin >> command;
		//add commands here
			//adding the capability to talk to a character in the room
		if (currentRoom->linked_Characters.find(command) != currentRoom->linked_Characters.end())
		{
			currentChar = currentRoom->linked_Characters[command];
			cout << "As you approach "
				+ currentChar->getPronoun()[1]
				+ " you see "
				+ currentChar->getDescription()
				+ "\n\n";
			if (!currentChar->getSpeakingLine().empty())
			{
				cout << currentChar->getSpeakingLine()[0];
			}
		}
		//specific key word used?
		else if (currentChar != &inspector)
		{
			for (int i = 0; i < currentChar->getKeyWords().size(); i++)
			{
				if (command == currentChar->getKeyWords()[i])
				{
					cout << currentChar->getPromptedLine()[i] << "\n";
				}
			}
		}
		//the command to change rooms
		else if (currentRoom->linked_rooms.find(command) != currentRoom->linked_rooms.end())
		{
			currentRoom = currentRoom->linked_rooms[command];
			currentChar = &inspector; //when leaving a room the character focus returns to the inspector
			changeRoom = true;
		}
		//a map command
		else if (command == "map")
		{
			cout << "----------------------------------------------------------\n"
				"|                  |                  |                  |\n"
				"|   Library        |   Throne         |    Weapon        |\n"
				"|                  |       Room       |        Room      |\n"
				"|                  |                  |                  |\n"
				"|                  |                  |                  |\n"
				"|                  |                  |                  |\n"
				"---------  -----------------  -----------------  ---------\n"
				"|                  |                  |                  |\n"
				"|   Queen Marie's  |   Courtyard      |    Dining        |\n"
				"|    apartments                                Room      |\n"
				"|                                                        |\n"
				"|                  |                  |                  |\n"
				"|                  |                  |                  |\n"
				"---------  -----------------  -----------------  ---------\n"
				"|                  |                  |                  |\n"
				"|   Observatory    |    Entrance      |    Oriental      |\n"
				"|                  |        Hall      |        Room      |\n"
				"|                  |                  |                  |\n"
				"|                  |                  |                  |\n"
				"|                  |                  |                  |\n"
				"----------------------------------------------------------\n";
		}
		else
		{
			cout << "You can't do that\n";
		}
	} while (command != "exit");


}

