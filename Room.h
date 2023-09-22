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
	vector<string> getKeyWords();
	vector<string> getPromptedLines();

	void setName(const string name);
	void setDescription(const string description);
	void setKeyWords(const vector<string> keyWords);
	void setPromptedLines(const vector<string> promptedLines);

private:
	string name_;
	string description_;
	vector<string> keyWords_;
	vector<string> promptedLines_;
};

