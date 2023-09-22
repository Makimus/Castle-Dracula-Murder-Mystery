#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

class Character
{
public:
	Character();
	Character(string name, vector<string> pronoun);
	

	string getName();
	string getDescription();
	vector<string> getSpeakingLine();
	vector<string> getKeyWords();
	vector<string> getPromptedLine();// 
	vector<string> getPronoun();

	void setName(const string name);
	void setDescription(const string description);
	void setSpeakingLine(const vector<string> speakingLine);
	void setKeyWords(const vector<string> keyWords);
	void setPromptedLine(const vector<string> promptedLine);
	void setPronoun(const vector<string> pronoun);

private:
	string name_;
	string description_;
	vector<string> speakingLine_;
	vector<string> keyWords_;
	vector<string> promptedLines_;
	vector<string> pronouns_;

};

