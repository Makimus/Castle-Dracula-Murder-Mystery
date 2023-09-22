#pragma once
#include <string>
#include <map>
#include <vector>

map<string, string> story = {
	{"paragraph1", "In the DRACULA Castle 'BRAN', set in Romania, the BRAN Castle Museum has been closed for a private event held by Sir Alexandru Albescu.\n"
				"A lavish banquet was in full swing. Distinguished nobles such as an old countess from Sweden and the Baroness from Holland had gathered to celebrate.\n\n"},
    {"paragraph2" , "As the night progressed, some of the guests as well as the butlers and the maids would disappear and unease was settled among the revellers.\n"
    			"Suddenly, Sir Alexandru Albescu collapsed and held onto the castle's large silk banners as the goblet he held in his hand dropped creating a large sound which echoed through the room.\n"
    			"The wine in the goblet spilled everywhere and panic rippled through the crowd as all the guests and all the maids and butlers stood in silence.\n\n"},
    {"paragraph3", "Luckily, a young couple who were on their honeymoon, one of them happened to be a doctor.\n"
    			"Dr.Ella Newton was called to the body and declared that Sir Alexandru Albescu had been poisoned.\n\n"},
	{"paragraph4", "Whispers of conspiracy spread like wildfire amongst the hall.\n"
				"Suspicion fell upon all of the guests, each harbouring secrets and motives of their own.\n\n"}
};


/////////////////////ROOM ASSETS///////////////////////
/*
 * (map)nameRoom
 * (map)descriptionRoom
 */

std::map<std::string, std::string> nameRoom = {
    {"library", "King Ferdinand's Library"},
    {"throne", " The Vampire's Throne Room"},
    {"weapon", "The Royal Armory 'King Carol the First' "},

	{"marie", "Queen Marie's Apartment"},
    {"court", "The Bran Castle Courtyard"},
    {"restaurant", "Dracula's Restaurant"},

	{"observatory", "The Prince Vlad's Observatory"},
    {"entrance", "The Grand Entrance Hall"},
    {"oriental", "The Oriental Saloon"},
};


std::map<std::string, std::string> descriptionRoom = {
    {"library", "King Ferdinand's Library. The library has a massive door located on the southern wall of the room.\n"
				"On the East Wall is a huge library of books. The room has a balcony, access to the balcony can be done through a huge glass door located on the North Wall of the room.\n"
				"Natural light enters through the glass door but also through the 2 windows located on the west wall of the room.\n\n"},

	{"throne", "The Vampire's Throne Room, with a pink background, has an eclectic architecture with the main element of the composition being the engaged column with a Corinthian-style capital and the column spindle processed with traditional ornamental motifs of Byzantine style architecture. The columns are made of white Ruschița marble. There is a monumental door carved with decorative motifs, framed in marble frames and radiator masks cast in brass, richly ornamented. The ceiling, composed of 7 rhythmic skylights, on the crossbars of the hall, made of gilded sheet metal, is cut into a vault(hidden candelabra). Velvet brocade drapes stitched with gold thread emphasize the luxury of this room.\n\n"},

	{"weapon", "The  'King Carol the First' Armory Room was set up in a space decorated in the German Renaissance style. The walls are decorated on the lower part with oak paneling, and the ceiling with coffers bearing coats of arms and mottos in Latin. The rooms contain a rich collection of weapons, over 4000 European and Oriental pieces, from the 14th-17th centuries. The panoplies are accompanied by a suite of German armour from the 16th and 17th centuries and a precious complete armour of a horse and knight, of the Maximilian type, unique in Romania.\n\n"},

	{"marie", "Queen Maria's Apartment is a room with two large deep windows on the same wall (West Wall) and is decorated in a medieval style, the room has 3 doors that are made of massive oak wood (one door on North, East and South Walls), it also has a fireplace in the North-East corner. In the middle of the room there is a monumental bed with a canopy, a writing desk is situated in the West-North corner, a chest under one of the windows, a dressing table with a mirror in the South-East corner of the room, on this table is the box with the queen's jewels. On the table is the queen's intimate diary (one of the main elements of the game).\n\n"},

	{"court", "The BRAN Castle Courtyard is an open, cobblestone space enclosed by towering stone walls.  Knights spar with clashing swords and servants rush around with supplies.There's a lush garden and a central fountain.\n\n"},

	{"restaurant", "a grand dining room with three wide windows,\n"
				"embellished with stained glass depicting beautiful scenes. The walls are\n"
				"almost entirely covered by paintings depicting bucolic scenes of the lives\n"
				"of German nobility in the romantic framework of the 17th - 18th centuries.\n"
				"A large dining table dominates the centre of the room, richly adorned by\n"
				"cold, untouched desserts and drinks. However, all this grandeur fails to\n"
				"distract you from the corpse collapsed by the silk drapes. An older\n"
				"gentleman, Sir Alexandru Albescu, lies cold on the floor, one hand twisted\n"
				"in the curtains and the other hand reaching out for a fallen goblet,\n"
				"spilling a dark red liquid into the floor.\n\n"},

	{"observatory", "The Prince Vlad's Observatory tower is in the castle, a secluded retreat for stargazers. It offers panoramic views of the surrounding lands through its large windows. There are extraordinary telescopes and astronomical instruments.\n\n"},

	{"entrance", "a grand chamber of stone\n"
			"and splendor. Towering walls with tapestries and torches greet you as you\n"
			"enter. A magnificent chandelier hangs from the vaulted ceiling. A sweeping\n"
			"staircase beckons to the upper levels decorated with model knights suited\n"
			"in silver armour.\n\n"},

	{"oriental", "The Oriental Room is in shades of red and gold. It has no windows, access to the room is through one double door situated on the North wall. In each corner of the room there is a half meter wide mirror that stretches from the floor to the ceiling. The furniture is in Turkish style with: Turkish sofas on each wall, in front of the sofas there are low tables with 2 stools each. On the floor is a huge Persian carpet that covers the entire floor of the room. In the middle of the room there is a small table, also in Turkish style, surrounded by 4 stools.The Oriental salon has hand embroidery on the ceiling and walls. The ensemble is completed by a collection of Turkish and Persian brass vessels.\n\n"},
};



/////////////////////////////////////CHARACTER ASSETS////////////////////////////////////////////

// CHARACTER ASSETS (3 maps, 9 vectors)
/*
 * (map) nameCharacter
 * (map) descriptionCharacter
 * (map) pronounChar
 *
 * (vector) princessPromtedLine
 * (vector) madamePromtedLine
 * (vector) baronessPromtedLine
 * (vector) workerPromtedLine
 * (vector) inspectorPromtedLine
 *
 * (vector) princessSpeakingLine
 * (vector) madameSpeakingLine
 * (vector) baronessSpeakingLine
 * (vector) workerSpeakingLine
 * (vector) inspectorSpeakingLine
 *
 * (vector) princessKeyWords
 * (vector) madameKeyWords
 * (vector) workerKeyWords
 * (vector) baronessKeyWords
 * (vector) inspectorKeyWords
 */

    std::map<std::string, std::string> nameCharacter = {
          {"inspector", "The Inspector"},
          {"organizer", "Sir Alexandru Albescu"},
          {"princess","Penelope",},
          {"baroness", "Helena Van Arsdale"},
          {"worker", "Andrzej"},
          {"madame", "Madame Ionescu"},
};

std::map<std::string, std::string> descriptionCharacter = {
      {"inspector", "The Inspector, a very experimented, intelligent and unconventional cop with flair for people (40 years old)\n\n"},
      {"organizer", "The organizer of the private event connected with all the quest somehow (30 years old)\n\n" },
      {"princess","Princess Penelope. A young, very beautiful woman with bright red hair that is cut short into a fashionable bob. She wears a sleek blue dress with subtle rhinestones. (20 years old)\n\n",},
      {"baroness", "Baroness from Holland Helena Van Arsdale - an aristocrat who is very protective of their family's reputation and might go to great lengths to cover things up (70 years old).\n\n"},
      {"worker", "Andrzej, a polish worker in steel from Steel City (Sheffield) who won an invitation to this private event at a bet and has some skills that can solve the crime. (30 years old)\n\n"},
      {"madame", "Madame Elena Ionescu - a psychic medium who claims she can communicate with ghosts and see the future ( could be a red herring, or not) (she is around 60)\n\n"},
};

std::map<std::string, std::vector<std::string>> pronounChar = {
      {"inspector", {"he", "him"}},
      {"princess",{"she", "her"}},
      {"baroness", {"she", "her"}},
      {"worker", {"he", "him"}},
      {"madame", {"she", "her"}},
};

////////////////////////////////////////PROMPTED CHARACTER LINES/////////////////////////////////////////////////

std::vector<std::string> princessPromptedLine = {
	"Oh how dreadful, I have never witnessed something like this, but did I hear some unusual noises coming from the library earlier. It sounded like someone was arguing, but I didn't think it would result in poison being involved. Please find the truth and bring justice to our Kingdom.\n\n" ,
	"line 2\n\n",
	"line 3\n\n" };

std::vector<std::string> madamePromptedLine = {
	"Well, well, well, you've come to the right place, but sharing comes at a price. What's it worth to you? Maybe have a look at the passage that no one knows about in this castle. But keep it a secret, okay?\n\n",
	"line 2\n\n",
	"line 3\n\n" };

std::vector<std::string> workerPromptedLine = {
	"Sir, I've been busy with my duties but I did notice something off about the Princess ... She seemed annoyed with Sir Alexandru Albescu this morning about getting his fingerprints all over her new dressing mirror.But who knows if that's related to his murder?\n\n" };

std::vector<std::string> baronessPromptedLine = {
	"Ah such a shame, I quite liked Sir Alexandru. I may have some information but you must understand, I can't be too forthcoming. Let's just say the couple on the honeymoon seemed to have great interest in Maria's Key. Investigate wisely and you might uncover what you seek...\n\n" };

std::vector<std::string> inspectorPromptedLine = {
	"Thank you for bringing this matter to my attention. I’ve been on the case and here’s what I found out so far: Sir Alexandru was in the drinking reception when he was poisoned. Everyone but the couple from the honeymoon were there. However there are only two sets of fingerprints leading away from the crime scene. Footprints of high heels ... I suggest we follow this trail carefully and get closer to the truth!\n\n",
	"2\n\n",
	"3\n\n" };


//////////////////////////////////////////////////CHARACTER KEYWORDS///////////////////////////////////////////////////////
std::vector<std::string> princessKeyWords = { "11 o'clock","2","3" };
std::vector<std::string> madameKeyWords = { "1","2","3" };
std::vector<std::string> workerKeyWords = { "1","2","3" };
std::vector<std::string> baronessKeyWords = { "1","2","3" };
std::vector<std::string> inspectorKeyWords = { "1","2","3" };



//////////////////////////////////////CHARACTER SPEAKING LINES///////////////////////////////////////////////////

std::vector<std::string> princessSpeakingLine = { "1","2","3" };
std::vector<std::string> madameSpeakingLine = { "1","2","3" };
std::vector<std::string> workerSpeakingLine = { "1","2","3" };
std::vector<std::string> baronessSpeakingLine = { "1","2","3" };
std::vector<std::string> inspectorSpeakingLine = { "1","2","3" };


/////////////////////////////////////ROOM PROMPTED LINES/////////////////////////////////////////////

std::vector<std::string> entrancePromptedLine = { "", "", "" };
std::vector<std::string> courtyardPromptedLine = { "" };
std::vector<std::string> thronePromptedLine = { "" };
std::vector<std::string> mariesAptPromptedLine = { "" };
std::vector<std::string> libraryPromptedLine = { "" };
std::vector<std::string> observatoryPromptedLine = { "" };
std::vector<std::string> restaurantPromptedLine = { "The body is pale cold, it has been a while since the murder occurred.\nThe body of Alexandru is finely dressed in a tuxedo,\nshowing off his wealth with tasteful jewelry and a\nfancy watch on the hand clutching the goblet.\n\n",
														"The goblet is finely made and is identical to the others sat on the\ntable, whoever did this either knew which goblet Alexandru would drink from\nor Alexandru wasn't the intended target...",
														"The twisted red curtains are clutched in Alexandru's hand, even in death.\nSomething catches your eye, from your position by the body you see\na hidden servants door behind one of the other curtains.",
														"The fine watch cracked as the man fell, causing the hands to be frozen at eleven o'clock."};
std::vector<std::string> weaponRoomPromptedLine = { "" };
std::vector<std::string> orientalRoomPromptedLine = { "" };

///////////////////////////////////////ROOM KEYWORDS////////////////////////////////////////////////

std::vector<std::string> entranceKeyWords = { "" };
std::vector<std::string> courtyardKeyWords = { "" };
std::vector<std::string> throneKeyWords = { "" };
std::vector<std::string> marieKeyWords = { "" };
std::vector<std::string> libraryKeyWords = { "" };
std::vector<std::string> observatoryKeyWords = { "" };
std::vector<std::string> restaurantKeyWords = { "body", "goblet", "curtains", "watch"};
std::vector<std::string> weaponKeyWords = { "" };
std::vector<std::string> orientKeyWords = { "" };