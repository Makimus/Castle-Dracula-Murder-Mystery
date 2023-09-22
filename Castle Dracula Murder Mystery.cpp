// Last update: 20/09/2023
// Start date: 20/09/2023
// By Max Tittle, Vasile-Daniel Dan, Erica Taylor
// UK

#include <iostream>

#include "Room.h"
#include "assets.h"
#include "Character.h"

using namespace std;



// ********************************FUNCTIONS******************************************
//void performCommand(string _command)
//{
//	
//}

bool CheckKeyWord(string _KeyWord, Character* _Character)
{
    for (int i = 0; i < _Character->getKeyWords().size(); i++)
    {
        if (_KeyWord == _Character->getKeyWords()[i])
        {
            return true;
        }
    }
    return false;
}

void performInspection(Room* currentRoom)
{
    string inspection;
    cout << "What would you like to inspect in " + currentRoom->getName() + "?\n\n";
    cin >> inspection;
    for (int i = 0; i < currentRoom->getKeyWords().size(); i++)
    {
        if (inspection == currentRoom->getKeyWords()[i])
        {
            cout << currentRoom->getPromptedLines()[i] << "\n\n";
        }
    }
}

void performTalk(Room* currentRoom)
{
    string talk;
    string keyWord;
    bool conversation = true;
    cout << "Who would you like to talk to in " + currentRoom->getName() + "?\n\n";
    cin >> talk;
    if(currentRoom->linked_Characters.find(talk) != currentRoom->linked_Characters.end())
    {
	    Character* currentChar = currentRoom->linked_Characters[talk];
        cout << "As you approach "
            + currentChar->getPronoun()[1]
            + " you see "
            + currentChar->getDescription()
            + "\n\n";
        if (!currentChar->getSpeakingLine().empty())
        {
            cout << currentChar->getSpeakingLine()[0] + "\n\n";
        }
        do
        {
            cout << "What would you like to talk about with " + currentChar->getName() + "\n\n";
            cout << "to finish the conversation type \"end\"\n";
            cin >> keyWord;
            if (CheckKeyWord(keyWord, currentChar))
            {
                for (int i = 0; i < currentChar->getKeyWords().size(); i++)
                {
                    if (keyWord == currentChar->getKeyWords()[i])
                    {
                        cout << currentChar->getPromptedLine()[i] << "\n\n";
                    }
                }
            }
            if (keyWord == "end")
            {
                conversation = false;
            }

        } while (conversation);
    }
    else
    {
        cout << "they are not in this room.\n\n";
    }
    
    

}



//*****************************END OF FUNCTIONS*************************************


int main()
{
	std::cout << "Welcome to Bram Castle! there's been a murder!\n\n";





    ///////////   Set up GAME OBJECTS    //////////////////////////////////////////////////// 

    // Set up LIST OF ROOMS (9 rooms)
    Room entranceWay;
    Room courtyard;
    Room throneRoom;
    Room library;
    Room queenMariesApt;
    Room observatory;
    Room restaurant;
    Room weaponRoom;
    Room orientalRoom;

    //Set up LIST OF CHARACTERS ( 5 characters)
    Character inspector;
    Character organizer;
    Character princess;
    Character baroness;
    Character worker;
    Character madame;

    // ************ START SET UP ROOMS ******************************************

    // Set up NAMES OF THE ROOMS 
    entranceWay.setName(nameRoom["entrance"]);
    courtyard.setName(nameRoom["court"]);
    throneRoom.setName(nameRoom["throne"]);
    library.setName(nameRoom["library"]);
    queenMariesApt.setName(nameRoom["marie"]);
    observatory.setName(nameRoom["observatory"]);
    restaurant.setName(nameRoom["restaurant"]);
    weaponRoom.setName(nameRoom["weapon"]);
    orientalRoom.setName(nameRoom["oriental"]);



    // Set up DESCRIPTION OF ROOMS 
    entranceWay.setDescription(descriptionRoom["entrance"]);
    courtyard.setDescription(descriptionRoom["court"]);
    throneRoom.setDescription(descriptionRoom["throne"]);
    library.setDescription(descriptionRoom["library"]);
    queenMariesApt.setDescription(descriptionRoom["queen"]);
    observatory.setDescription(descriptionRoom["observatory"]);
    restaurant.setDescription(descriptionRoom["restaurant"]);
    weaponRoom.setDescription(descriptionRoom["weapon"]);
    orientalRoom.setDescription(descriptionRoom["oriental"]);

    // ********** END SET UP ROOMS *********************************************


    // ************ START SET UP CHARACTERS  ******************************************
    //Set up CHARACTER NAME  
    inspector.setName(nameCharacter["inspector"]);
    princess.setName(nameCharacter["princess"]);
    baroness.setName(nameCharacter["baroness"]);
    worker.setName(nameCharacter["worker"]);
    madame.setName(nameCharacter["madame"]);

    //Set up CHARACTER PRONOUN 
    inspector.setPronoun(pronounChar["inspector"]);
    princess.setPronoun(pronounChar["princess"]);
    baroness.setPronoun(pronounChar["baroness"]);
    worker.setPronoun(pronounChar["worker"]);
    madame.setPronoun(pronounChar["madame"]);


    //Set up CHARACTER DESCRIPTION 
    inspector.setDescription(descriptionCharacter["inspector"]);
    princess.setDescription(descriptionCharacter["princess"]);
    baroness.setDescription(descriptionCharacter["baroness"]);
    worker.setDescription(descriptionCharacter["worker"]);
    madame.setDescription(descriptionCharacter["madame"]);

    //Set up CHARACTER KEYWORDS 
    inspector.setKeyWords(inspectorKeyWords);
    princess.setKeyWords(princessKeyWords);
    baroness.setKeyWords(baronessKeyWords);
    worker.setKeyWords(workerKeyWords);
    madame.setKeyWords(madameKeyWords);


    //Set up CHARACTER PROMPTED LINE
    inspector.setPromptedLine(inspectorPromptedLine);
    princess.setPromptedLine(princessPromptedLine);
    baroness.setPromptedLine(baronessPromptedLine);
    worker.setPromptedLine(workerPromptedLine);
    madame.setPromptedLine(madamePromptedLine);

    //Set up CHARACTER SPEAKING LINE 
    inspector.setSpeakingLine(inspectorSpeakingLine);
    princess.setSpeakingLine(princessSpeakingLine);
    baroness.setSpeakingLine(baronessSpeakingLine);
    worker.setSpeakingLine(workerSpeakingLine);
    madame.setSpeakingLine(madameSpeakingLine);

    // **************** END SET UP CHARACTERS ******************************************

    // **************** START LINK THE ROOMS ******************************************* 

    // middle map 
    courtyard.linked_rooms["north"] = &throneRoom;
    courtyard.linked_rooms["east"] = &restaurant;
    courtyard.linked_rooms["south"] = &entranceWay;
    courtyard.linked_rooms["west"] = &queenMariesApt;

    // left side - middle 
    queenMariesApt.linked_rooms["east"] = &courtyard;
    queenMariesApt.linked_rooms["north"] = &library;
    queenMariesApt.linked_rooms["south"] = &observatory;

    // right side - middle 
    restaurant.linked_rooms["west"] = &courtyard;
    restaurant.linked_rooms["north"] = &weaponRoom;
    restaurant.linked_rooms["south"] = &orientalRoom;



    // rooms top map (left to right, soth)
    library.linked_rooms["south"] = &queenMariesApt;
    throneRoom.linked_rooms["south"] = &courtyard;
    weaponRoom.linked_rooms["south"] = &restaurant;

    // rooms bottom map (left to right, north) 
    observatory.linked_rooms["north"] = &queenMariesApt;
    entranceWay.linked_rooms["north"] = &courtyard;
    orientalRoom.linked_rooms["north"] = &restaurant;

    // *************** END LINK THE ROOMS  *******************************************



    // ************* START LINK THE CHARACTERS TO THE ROOMS **************************

    entranceWay.linked_Characters["princess"] = &princess;
    entranceWay.linked_Characters["madame"] = &madame;

    restaurant.linked_Characters["worker"] = &worker;

    queenMariesApt.linked_Characters["baroness"] = &baroness;

    // ************* END  LINK THE CHARACTERS TO THE ROOMS **************************
    // 
    // 
    // 
    // 
    // ************* START LINK THE PROMPTED LINES TO THE ROOMS *************************************

    entranceWay.setPromptedLines(entrancePromptedLine);
    courtyard.setPromptedLines(courtyardPromptedLine);
    throneRoom.setPromptedLines(thronePromptedLine);
    library.setPromptedLines(libraryPromptedLine);
    queenMariesApt.setPromptedLines(mariesAptPromptedLine);
    observatory.setPromptedLines(observatoryPromptedLine);
    restaurant.setPromptedLines(restaurantPromptedLine);
    weaponRoom.setPromptedLines(weaponRoomPromptedLine);
    orientalRoom.setPromptedLines(orientalRoomPromptedLine);

    entranceWay.setKeyWords(entranceKeyWords);
    courtyard.setKeyWords(courtyardKeyWords);
    throneRoom.setKeyWords(throneKeyWords);
    library.setKeyWords(libraryKeyWords);
    queenMariesApt.setKeyWords(marieKeyWords);
    observatory.setKeyWords(observatoryKeyWords);
    restaurant.setKeyWords(restaurantKeyWords);
    weaponRoom.setKeyWords(weaponKeyWords);
    orientalRoom.setKeyWords(orientKeyWords);



	// ************* END LINK THE PROMPTED LINES TO THE ROOMS *************************************









	Room* currentRoom = &entranceWay;
	Character* currentChar = &inspector;
	string command;
    string inspection;
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

			//The basic "inspect" command for looking at the room
		if (command == "inspect")
		{
            performInspection(currentRoom);
		}
			//The "talk" command that enters into a conversation with a chosen character
        else if (command == "talk")
        {
            performTalk(currentRoom);
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
					"----------------------------------------------------------\n\n";
		}
		else
		{
			cout << "You can't do that\n";
		}
	} while (command != "exit");


}

