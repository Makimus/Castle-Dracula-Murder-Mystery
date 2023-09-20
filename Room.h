#pragma once
#include <map>
#include <string>

#include "Character.h"

using namespace std;

class Room
{
public:
	Room();
	Room(string name);
	map <string, Room*> linked_rooms = {};
	map <string, Character*> linked_Characters = {};

	string getName();
	string getDescription();

	void setName(const string name);
	void setDescription(const string description);

private:
	string name_;
	string description_;
};

