#include "Room.h"

Room::Room()
{
	name_ = "";
}

Room::Room(std::string name)
{
	name_ = name;
}

std::string Room::getName()
{
	return name_;
}

std::string Room::getDescription()
{
	return description_;
}

vector<string> Room::getKeyWords()
{
	return keyWords_;
}

vector<string> Room::getPromptedLines()
{
	return promptedLines_;
}

void Room::setName(const std::string name)
{
	name_ = name;
}

void Room::setDescription(const std::string description)
{
	description_ = description;
}

void Room::setKeyWords(const vector<string> keyWords)
{
	keyWords_ = keyWords;
}

void Room::setPromptedLines(const vector<string> promptedLines)
{
	promptedLines_ = promptedLines;
}
