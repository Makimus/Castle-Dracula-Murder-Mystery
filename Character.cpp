#include "Character.h"

Character::Character()
{
	name_ = "";
}

Character::Character(string name, vector<string> pronoun)
{
	name_ = name;
	pronouns_ = pronoun;
}

string Character::getName()
{
	return name_;
}

string Character::getDescription()
{
	return description_;
}

vector<string> Character::getSpeakingLine()
{
	return speakingLine_;
}

vector<string> Character::getKeyWords()
{
	return keyWords_;
}

vector<string> Character::getPromptedLine()
{
	return promptedLines_;
}

vector<string> Character::getPronoun()
{
	return pronouns_;
}

void Character::setName(const string name)
{
	name_ = name;
}

void Character::setDescription(const string description)
{
	description_ = description;
}

void Character::setSpeakingLine(const vector<string> speakingLine)
{
	speakingLine_ = speakingLine;
}

void Character::setKeyWords(const vector<string> keyWords)
{
	keyWords_ = keyWords;
}

void Character::setPromptedLine(const vector<string> promptedLines)
{
	promptedLines_ = promptedLines;
}

void Character::setPronoun(const vector<string> pronoun)
{
	pronouns_ = pronoun;
}