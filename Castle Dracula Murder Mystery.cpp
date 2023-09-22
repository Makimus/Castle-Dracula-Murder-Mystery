// Last update: 22/09/2023
// Start date: 20/09/2023
// By Max Tittle, Vasile-Daniel Dan, Erica Taylor
// UK

#include <iostream>
#include <cstdlib>

#include "Room.h"
#include "assets.h"
#include "Character.h"

using namespace std;



// ********************************FUNCTIONS******************************************

//used to compare input to character keywords
bool CheckCharacterKeyWord(string _KeyWord, Character* _Character)
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
// does the same for rooms, in the future we should put rooms and characters as sub-classes of "interactables" so we can do the same func. for both.
bool CheckRoomKeyWord(string _KeyWord, Room* _Room)
{
    for (int i = 0; i < _Room->getKeyWords().size(); i++)
    {
        if (_KeyWord == _Room->getKeyWords()[i])
        {
            return true;
        }
    }
    return false;
}


//The "inspect" command, will prompt you for another word to test against the room's prompts
void performInspection(Room* currentRoom)
{
    string inspectionKeyWord;
    bool inspection = true;
    cout << "What would you like to inspect in " + currentRoom->getName() + "?\nWhen you have finished your inspection, type \"end\"\n\n> ";
    do
    {
        cout << "> ";
		cin >> inspectionKeyWord;
		if (CheckRoomKeyWord(inspectionKeyWord, currentRoom))
		{
			for (int i = 0; i < currentRoom->getKeyWords().size(); i++)
			{
				if (inspectionKeyWord == currentRoom->getKeyWords()[i])
				{
					cout << currentRoom->getPromptedLines()[i] << "\n\n";
				}
			}  
		}
		else if (inspectionKeyWord == "end")
		{
		inspection = false;
		}
		else
		{
		    cout << "That doesn't seem to be something to inspect in this situation.\nTry a similar word or synonym.\n\n> ";
		}
    }
    while (inspection == true);
}
// The "talk" command,  will prompt you for another word to test against the character's prompts
void performTalk(Room* currentRoom)
{
    string talk;
    string talkKeyWord;
    bool conversation = true;
    cout << "Who would you like to talk to in " + currentRoom->getName() + "?\n\n> ";
    cin >> talk;
    if(currentRoom->linked_Characters.find(talk) != currentRoom->linked_Characters.end())
    {
	    Character* currentChar = currentRoom->linked_Characters[talk];
        cout << "\nAs you approach "
            + currentChar->getPronoun()[1]
            + " you see "
            + currentChar->getDescription()
            + "\n";
        if (!currentChar->getSpeakingLine().empty())
        {
            cout << currentChar->getSpeakingLine()[0] + "\n\n";
        }
        do
        {
            cout << "What would you like to talk about with " + currentChar->getName() + "\n";
            cout << "to finish the conversation type \"end\"\n\n> ";
            cin >> talkKeyWord;
            if (CheckCharacterKeyWord(talkKeyWord, currentChar))
            {
                for (int i = 0; i < currentChar->getKeyWords().size(); i++)
                {
                    if (talkKeyWord == currentChar->getKeyWords()[i])
                    {
                        cout << currentChar->getPromptedLine()[i] << "\n\n";
                    }
                }
            }
            else if (talkKeyWord == "end")
            {
                conversation = false;
            }
            else
            {
                cout << "They don't seem to know anything about that.\nTry a similar word or synonym\n\n> ";
            }

        } while (conversation);
    }
    else
    {
        cout << "They are not in this room.\n\n> ";
    }
    
    

}



//*****************************END OF FUNCTIONS*************************************


int main()
{
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
    queenMariesApt.setDescription(descriptionRoom["marie"]);
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



    // rooms top map (left to right, south)
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

    // *************SETTING UP INITIAL VARIABLES**********************
	Room* currentRoom = &entranceWay;
	Character* currentChar = &inspector;
	string command;
    string inspection;
	bool changeRoom = true;






    //*********************STARTING PLAY!*************************************************************

    cout << "Welcome to Bram Castle Murder Mystery!\n\n";
    system("pause");

	// a tutorial here

    cout << "\nTo play, simply move around the castle and inspect the rooms, or interact with the guests.\n\n"
        "To move, use the directions: \"north\", \"east\", \"south\", and \"west\".\n\n"
        "If you get lost, typing \"map\" will provide you with directions to orient yourself, please\n"
        "be aware that some adjacent rooms don't have doors between them.\n\n";
    system("pause");
    cout << "\nTo talk to a guest, simply type \"talk\" when in the room with a guest and type their name, eg:\n"
        "\"talk\"\n"
        "\"worker\"\n"
        "You will then be prompted to ask them about something, try using different words you have encountered\n"
        "in the game, for example you may use the key \"poison\" to ask the guests about that topic. try your\n"
        "best and if you struggle, try using an alternative word.\n\n"
        "There is also an \"inspect\" command you can use in the rooms to search for clues,\n"
        "this works the same way as \"talk\" does.\n\n";
    system("pause");
	cout <<	"\nHave fun! We suggest using a pen and paper to keep track of different clues, there will be many ways\n"
		"to solve this case!\n\n"
		"Without further adieu, enjoy!\n\n";
    system("pause");
    // introduction appearing paragraph by paragraph
    
    for (int i = 1; i <= story.size(); i++)
    {
        cout << "\n" + story[i];
        //cout << right << setfill('.') << setw(30) << endl;
        system("pause");
    }

    cout << "\n";



	do
	{

		//if you change rooms you get a description, this only runs the first time you enter a room
		if (changeRoom == true)
		{
			//giving you a description of the room
			cout << "\nLooking around "
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

